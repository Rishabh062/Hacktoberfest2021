<!DOCTYPE html>
<html>
    <body>

<?php
  
  #WHILE LOOP
  $x=1;
  while($x<10)
  {
      echo "The number is: $x <br>";
      $x++;
  }
  echo "<hr/>";

  #DO WHILE LOOP
  $x=6;
  do{
      echo "The number is: $x <br>";
      $x++;
  }while($x<=5);

  echo "<hr/>";

  #FOR LOOP
  for($x=0;$x<=10;$x++)
  {
      echo "$x<br>";
  }
echo "<hr/>";

#FOR EACH LOOP
$cars=array("volvo","bmw","honda","ford");

foreach($cars as $value){
    echo "$value<br>";
}
    
?>

</body>
</html>