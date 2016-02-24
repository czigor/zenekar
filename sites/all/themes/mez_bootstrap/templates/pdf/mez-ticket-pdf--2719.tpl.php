\documentclass[a4paper]{article}
\usepackage[T1]{fontenc}
\usepackage[utf8x]{inputenc}
\usepackage{ae,aecompl}
\usepackage[margin=1cm]{geometry}
\usepackage{tikz}
\usepackage{graphicx}
\usepackage[hidelinks]{hyperref}
\usepackage{qrcode}
\usepackage{makebarcode}

\pagestyle{empty}

\newcommand{\addsponsor}[1]{\includegraphics[width=2.3cm,height=8mm]{<?php print drupal_realpath(drupal_get_path('theme', 'mez_bootstrap') . '/images/sponsors') . '/';?>#1}}
\definecolor{lg}{rgb}{0.95,0.95,0.95}

% One ticket for the 2015. 05. 13. concert.
\newcommand{\mezticket}[4]{
\begin{center}
\begin{tikzpicture}[scale=0.85]
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
\node[anchor=south west,align=center,font=\tiny] at (0,0) {
\includegraphics[width=2.75cm]{<?php print drupal_realpath(drupal_get_path('theme', 'mez_bootstrap') . '/images') . '/';?>mez-logo.png}\\
\url{http://zenekar.bme.hu}
};
\draw (4,0)--(4,7);
% Concert details
\node[anchor=north, align=center] at (13,6.9) {
	{\small Zeneakadémia, 1061 Budapest, Liszt Ferenc tér 8.}\\
	\\
	A 120 éves\\
	\LARGE \textsc{Műegyetemi Zenekar jubileumi hangversenye}\\
	\emph{Liszt: Les Préludes --- Weber: Klarinétverseny (op. 74) --- Brahms: IV. szimfónia}\vspace{3mm}\\
	Nagyterem, 2016. május 13., péntek, 19:30\vspace{3mm}\\
	{\Large \underline{#1}}\vspace{3mm}\\
	Ára: #2
};
\node[anchor=south east,font=\scriptsize] at (22,0) {\qrcode[height=2cm]{http://zenekar.bme.hu/hu/concert/120-eves-jubileumi-hangverseny}};
% Ticket data
\node[anchor=south,align=center,rotate=90,font=\tiny] at (4,3.5) {
\tiny Vásárlás ideje: \texttt{#4}\\
\barcode[code=Code39,H=5mm]{#3}\\
Sorszám: \texttt{#3}
};
% Sponsors
\node[anchor=south west,align=right] at (4,0) {
	\addsponsor{nka.png}
	\addsponsor{bme.png}
	\addsponsor{bme-ehk.png}
	\addsponsor{pro-progressio.png}
};
<?php if($env != 'live') :?>
	\node[draw,rounded corners=2pt, line width=0.5mm] [opacity=0.3,rotate=15,font=\Huge] at (11,3.5) {\bfseries MINTA MINTA MINTA MINTA MINTA};
<?php endif;?>
\end{tikzpicture}
\end{center}
\vspace{5mm}
}

\begin{document}

<?php foreach ($tickets as $ticket) :?>
  \mezticket{<?php print ucfirst($ticket['seat']) ?>}{<?php print $ticket['price']?> Ft}{ZAK<?php print str_pad($ticket['id'], 8, '0', STR_PAD_LEFT); ?>}{<?php print format_date($order->created, 'short', '', NULL, 'hu');?>}
<?php endforeach;?>

\end{document}
