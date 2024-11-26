<!DOCTYPE html>
<html>
    <body>

<?php
  
  #IF STATEMENT
  $x=49;

  if($x<50)
  {
      echo "condition met ";
  }
  else
  {
      echo "condition not met ";
  }

  echo "<hr/>";
  #IF ELSEIF
$x=65;
if($x<50){
    echo "F";
}
else if($x>=50 && $x<60){
    echo "D";
}
else if($x>=60 && $x<70){
    echo "C";
}
else if($x>=70 && $x<80){
    echo "B";
}
else if($x>=80 && $x<90){
    echo "A";
}
else{
    echo "A+";
}

echo "<hr/>";

#SWITCH STATEMENT

$car="honda";
switch($car){
    case "volvo":
        echo "You drive a Volvo";
        break;
        case "bmw":
            echo "You drive a bmw";
            break;
            case "honda":
                echo "You drive a honda";
                break;
                default:
                echo "You don't drive";
}

    
?>

</body>
</html>