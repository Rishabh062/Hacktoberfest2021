<?php
   // Array with names
 
   $a[] = "Java";
   $a[] = "K programming language";
   $a[] = "Lisp";
   $a[] = "Microsoft technologies";
   $a[] = "Networking";
   $a[] = "Open Source";
   $a[] = "Prototype";
   $a[] = "Restful web services";
   $a[] = "Scrum";
   $a[] = "Testing";
   $a[] = "UML";
   $a[] = "VB Script";
   $a[] = "Web Technologies";
   
   $q = $_REQUEST["q"];
   $hint = "";
   
   if ($q !== "") {
      $q = strtolower($q);
      $len = strlen($q);
      
      foreach($a as $name) {
		
         if (stristr($q, substr($name, 0, $len))) {
            if ($hint === "") {
               $hint = $name;
            }else {
               $hint .= ", $name";
            }
         }
      }
   }
   echo $hint === "" ? "Please enter a valid course name" : $hint;
?>
