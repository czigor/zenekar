\documentclass[magyar]{article}
% !TEX encoding = UTF-8 Unicode
%% LaTeX Preamble - Common packages
\usepackage[utf8x]{inputenc} % Any characters can be typed directly from the keyboard, eg éçñ
\usepackage{graphicx}% Add graphics capabilities
\usepackage[a4paper]{geometry}
\usepackage[abs]{overpic}

% One ticket for the 2013. 11. 03. concert.
\newcommand{\mezticket}[2]{
  \begin{overpic}[unit=1mm, width=180mm]{<?php print drupal_realpath('sites/all/themes/mez_theme/images');?>/mez_ticket_1182.jpg}
  \put(18,13.5){\scriptsize #1}
  \put(28,8){\scriptsize #2}
  <?php if($env != 'live') :?>
    \put(10, 10){\Huge TESZTJEGY TESZTJEGY TESZTJEGY}
  <?php endif;?>>
  \put(62,13){ #1}
  \put(73,7.6){ #2}
\end{overpic}
}

\begin{document}

\setlength{\hoffset}{-1cm}
\setlength{\oddsidemargin}{0pt}
\setlength{\marginparwidth}{0pt}
\setlength{\parindent}{0cm}
<?php foreach ($tickets as $ticket) :?>
  \mezticket{<?php print $ticket['seat'] ?>}{<?php print $ticket['price']?> Ft}
<?php endforeach;?>

\end{document}
