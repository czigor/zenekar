\documentclass{article}
\usepackage[T1]{fontenc}
\usepackage[utf8x]{inputenc}
\usepackage{ae,aecompl}
\usepackage[paperwidth=210mm,paperheight=81mm,margin=1cm,headheight=0mm,headsep=0mm,footnotesep=0mm,footskip=0mm]{geometry}
\usepackage{tikz}
\usepackage{graphicx}
\usepackage[hidelinks]{hyperref}
\usepackage{qrcode}
\usepackage{makebarcode}

\pagestyle{empty}

\newcommand{\addsponsor}[1]{\includegraphics[width=2.3cm,height=8mm]{<?php print drupal_realpath(drupal_get_path('theme', 'mez_bootstrap') . '/images/sponsors') . '/';?>#1}}
\definecolor{lg}{rgb}{0.95,0.95,0.95}

% One ticket for the 2015. 05. 13. concert.
\newcommand{\mezticket}[5]{
%\vspace*{\fill}%
\begin{center}%
\begin{tikzpicture}[scale=0.85]%
% Border
\draw[rounded corners=5pt, line width=0.5mm,fill=lg] (0,0) rectangle (22,7);
% Organiser
\node[anchor=north west, align=left, font=\scriptsize] at (0.1,6.9) {
	Rendező:\\
	\\
	\quad\textsc{Műegyetemi}\\
	\quad\textsc{Szimfonikus}\\
	\quad\textsc{Zenekarért}\\
	\quad\textsc{Alapítvány}\\
	\\
	1085 Budapest,\\
	Baross u. 30.\\
	\\
	Adószám:\\
	18238334-1-42
};
\node[anchor=south west,align=center,font=\tiny] at (0.1,0.3) {
\includegraphics[width=2.75cm]{<?php print drupal_realpath(drupal_get_path('theme', 'mez_bootstrap') . '/images') . '/';?>mszz_logo_HU_inverse_transparent.pdf}\\
\url{http://zenekar.bme.hu}
};
\draw (4,0)--(4,7);
% % Concert details
\node[anchor=north, align=center] at (13,6.9) {
	{\small Helyszín: BME Központi épület, aula
	(1111 Budapest, Műegyetem rakpart 3.)
	}\\
	\\
	\LARGE \textsc{Műegyetemi Szimfonikus Zenekar}\\
	Saint-Saëns: III. (Orgona) szimfónia\\
	Muszorgszkij--Ravel: Egy kiállítás képei\\

	\emph{Vezényel: Erdélyi Dániel -- Koncertmester: Orova-Pechan Laura}\vspace{3mm}\\
	#5\vspace{3mm}\\
	{\Large \textbf{#1}}\vspace{3mm}\\
	Ára: #2
};
\node[anchor=south east,font=\scriptsize] at (22,0) {\qrcode[height=1.4cm]{#3}};
% Ticket data
\node[anchor=south,align=center,rotate=90,font=\tiny] at (4,4.7) {
\tiny
Sorszám: \texttt{#3}\\
Vásárlás ideje: \texttt{#4}\\
\barcode[code=Code39,H=5mm]{#3}
};
% Sponsors
\node[anchor=south west,align=right] at (4,0) {
%	\addsponsor{nka.png}
	\addsponsor{bme.png}
	\quad
	\addsponsor{bme-ehk.png}
%	\addsponsor{pro-progressio.png}
};
<?php if($env != 'live') :?>
	\node[draw,rounded corners=2pt, line width=0.5mm] [opacity=0.3,rotate=15,font=\Huge] at (11,3.5) {\bfseries MINTA MINTA MINTA MINTA MINTA};
<?php endif;?>
\end{tikzpicture}
\end{center}
%\vspace*{\fill}%
\newpage%
}

\begin{document}


<?php foreach ($tickets as $ticket) :?>
  <?php
  
  // There must be a better way...
  $field_time = db_select('field_data_field_time', 'fdft')
	->fields('fdft', array('field_time_value'))
    ->condition('fdft.entity_id', $ticket['concert_id'], '=')
    ->execute()
    ->fetch()
	->field_time_value;
  $datetime = new DateTime($field_time, new DateTimeZone("UTC"));
  $datetime->setTimezone(new DateTimeZone('Europe/Budapest'));
  $MONTHS = Array("január", "február", "március", "április", "május", "június", "július", "augusztus", "szeptember", "október", "november" , "december");
  $DAYS = Array("vasárnap", "hétfő", "kedd", "szerda", "csütörtök", "péntek", "szombat");
  $month = $MONTHS[$datetime->format("n") - 1];
  $day = $DAYS[$datetime->format("w")];
  $concert_time  = $datetime->format("Y. ") . $month . $datetime->format(" j.") . " $day " . $datetime->format("H:i");

  
  ?>
 \mezticket{<?php print ucfirst($ticket['seat']) ?>}{<?php print $ticket['price']?> Ft}{<?php print str_pad($ticket['id'], 8, '0', STR_PAD_LEFT); ?>}{<?php print format_date($order->placed, 'short', '', NULL, 'hu');?>}{<?php print $concert_time; ?>}
<?php endforeach;?>


\end{document}
