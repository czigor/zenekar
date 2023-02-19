\documentclass[magyar]{article}
% !TEX encoding = UTF-8 Unicode
%% LaTeX Preamble - Common packages
\usepackage[utf8x]{inputenc} % Any characters can be typed directly from the keyboard, eg éçñ
\usepackage{graphicx}% Add graphics capabilities
\usepackage[a4paper]{geometry}
\usepackage[abs]{overpic}

% One ticket for the 2021. 12. 04. 2nd concert.
\newcommand{\mezticket}[3]{
  \begin{overpic}[unit=1mm, width=180mm]{<?php print drupal_realpath('sites/all/themes/mez_bootstrap/images');?>/mez_ticket_5553.jpg}
    \put(60,27){
      \parbox{80mm}{%
        \begin{center}
\vspace{2.7cm}
#1


\vspace{0.3cm}

\tiny{
Sorszám: #2

Vásárlás ideje: #3
}
        \end{center}
      }
    }
  \end{overpic}
}

\begin{document}

\setlength{\hoffset}{-1cm}
\setlength{\oddsidemargin}{0pt}
\setlength{\marginparwidth}{0pt}
\setlength{\parindent}{0cm}
<?php foreach ($tickets as $ticket) :?>
  \mezticket{<?php print ucfirst($ticket['seat']) ?>}{<?php print str_pad($ticket['id'], 8, '0', STR_PAD_LEFT); ?>}{<?php print format_date($order->created, 'short', '', NULL, 'hu');?>}
<?php endforeach;?>

\end{document}
