<?php
   $variable = "string";
   $literally = 'This $variable will not print!\\n';
   
   print($literally);
   print "<br />";
   
   $literally = "This $variable will print!\\n";
   
   print($literally);
?>
