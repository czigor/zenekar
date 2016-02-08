\documentclass[a4paper]{article}
\usepackage[T1]{fontenc}
\usepackage[latin2]{inputenc}
\usepackage{ae,aecompl}
\usepackage[margin=1cm]{geometry}
\usepackage{tikz}
\usepackage{graphicx}
\usepackage[hidelinks]{hyperref}

\pagestyle{empty}

\newcommand{\addsponsor}[1]{\includegraphics[width=2.3cm,height=8mm]{<?php print drupal_realpath('sites/all/themes/mez_theme/images/sponsors/');?>#1}}
\definecolor{lg}{rgb}{0.98,0.98,0.98}

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
	1085 Budapest\\
	Baross u. 30.\\
	\\
	Adószám:\\
	18238334-1-42 MMA\\
};
\node[anchor=south west,align=center,font=\tiny] at (0,0) {
\includegraphics[width=2.75cm]{<?php print drupal_realpath('sites/all/themes/mez_theme/images');?>mez-logo.png}\\
\url{zenekar.bme.hu}
};
% Concert details
\node[anchor=north, align=center] at (13,6.9) {
	{\small Zeneakadémia, 1061 Budapest, Liszt Ference tér 8.}\\
	\\
	A 120 éves\\
	\LARGE \textsc{Műegyetemi Zenekar jubileumi hangversenye}\\
	\emph{Liszt: Les Preludes --- Weber: Klarinétverseny (op. 74) --- Brahms: IV. szimfónia}\vspace{3mm}\\
	Nagyterem, 2016. május 13. péntek 19:30\vspace{3mm}\\
	{\Large \underline{#1}}\vspace{3mm}\\
	Ára: #2 
};
\node[anchor=south west,font=\scriptsize] at (4,0) {\includegraphics[width=2cm]{<?php print drupal_realpath('sites/all/themes/mez_theme/images/');?>2719-qr.jpg}};
% Ticket data
\node[anchor=south,align=center,rotate=90,font=\tiny] at (4,3.5) {
Sorszám: \texttt{#3}\qquad
Vásárlás ideje: \texttt{#4}
};
% Sponsors
\node[anchor=south east,align=right] at (22,0) {
	\addsponsor{nka.png}
	\addsponsor{bme.png}
	\addsponsor{bme-ehk.png}
};
<?php if($env != 'live') :?>
	\node [text opacity=0.5,rotate=-20,font=\Huge] at (11,3.5) {TESZT TESZT TESZT TESZT};
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
