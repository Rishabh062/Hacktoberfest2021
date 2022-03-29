<!DOCTYPE html>
<html>
    <body>

<?php
  
  // BASIC FUNCTION
  function displaytxt(){
      echo "my first function";
  }
  
  displaytxt();
  echo "<hr/>";


  //FUNCTIONS ARGUMENT
function mycar($car,$color){
    echo "$car,$color<br>";
}
mycar("Volvo","blue");
mycar("BMW","white");
mycar("Honda","black");

echo "<hr/>";

//DEFAULT ARGUMENT VALUE
function myage($minage=30){
    echo "My age is: $minage <br>";
}
myage();
myage(50);
myage(60);
myage(19);

echo "<hr/>";

//RETURNING VALUES
function add($x,$y){
    $x=$x+$y;
    return $x;
}
echo "1+2=".add(1,2)."<br>";
echo "3+4=".add(3,4)."<br>";
echo "5+5=".add(5,5)."<br>";

?>


</body>
</html>