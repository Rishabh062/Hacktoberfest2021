<html>
   <body>
   
      <?php
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
      
      
      
      ?>
      
   </body>
</html>
