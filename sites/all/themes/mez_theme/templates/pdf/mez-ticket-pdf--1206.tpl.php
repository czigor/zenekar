\documentclass[magyar]{article}
% !TEX encoding = UTF-8 Unicode
%% LaTeX Preamble - Common packages
\usepackage[utf8x]{inputenc} % Any characters can be typed directly from the keyboard, eg éçñ
\usepackage{graphicx}% Add graphics capabilities
\usepackage[a4paper]{geometry}
\usepackage[abs]{overpic}

% One ticket for the 2014. 05. 19. concert.
\newcommand{\mezticket}[4]{
  \begin{overpic}[unit=1mm, width=180mm]{<?php print drupal_realpath('sites/all/themes/mez_theme/images');?>/mez_ticket_1206.jpg}
    <?php if($env != 'live') :?>
      \put(10, 10){\Huge TESZTJEGY TESZTJEGY TESZTJEGY}
    <?php endif;?>
    \put(60,27){
      \parbox{80mm}{%
        \begin{center}
#1

Ára: #2
\vspace{0.3cm}

\tiny{
Sorszám: #3

Vásárlás ideje: #4
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
  \mezticket{<?php print ucfirst($ticket['seat']) ?>}{<?php print $ticket['price']?> Ft}{ZAK<?php print str_pad($order->order_id, 8, '0', STR_PAD_LEFT); ?>}{<?php print format_date($order->created, 'short', '', NULL, 'hu');?>}
<?php endforeach;?>

\end{document}
