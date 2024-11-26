<html>
   <body>
   
      <?php
      // indexed array
         /* First method to create array. */
         $numbers = array( 1, 2, 3, 4, 5);
         
         foreach( $numbers as $value ) {
            echo "Value is $value <br />";
         }
         
         /* Second method to create array. */
         $numbers[0] = "one";
         $numbers[1] = "two";
         $numbers[2] = "three";
         $numbers[3] = "four";
         $numbers[4] = "five";
         
         foreach( $numbers as $value ) {
            echo "Value is $value <br />";
         }
      
      
      // Associative array
      
      /*Check if the key "test1" exists in an array:*/
      $a=array("test1"=>"val1","test2"=>"val2");
      if (array_key_exists("test1",$a))
        {
        echo "Key exists!";
        }
      else
        {
        echo "Key does not exist!";
        }
      // mutlidimensional array
      $cars = array (
         array("Volvo",22,18),
         array("BMW",15,13),
         array("Saab",5,2),
         array("Land Rover",17,15)
       );

       echo $cars[0][0].": In stock: ".$cars[0][1].", sold: ".$cars[0][2].".<br>";
       echo $cars[1][0].": In stock: ".$cars[1][1].", sold: ".$cars[1][2].".<br>";
       echo $cars[2][0].": In stock: ".$cars[2][1].", sold: ".$cars[2][2].".<br>";
       echo $cars[3][0].": In stock: ".$cars[3][1].", sold: ".$cars[3][2].".<br>";
      ?>
      
   </body>
</html>
