<!DOCTYPE html>
<html>
    <body>

    <h2>PHP Arithmetic Operator</h2>
    <?php
    
    $x=50;
    $y=20;
    //ADDITION
    echo $x+$y;
    echo "<hr/>";

    //Subtraction
    echo $x-$y;
    echo "<hr/>";
    
    //Multiplication
    echo $x*$y;
    echo "<hr/>";

    //Division
    echo $x/$y;
    echo "<hr/>";

    //Hobbies
    echo $x%$y;

    ?>
    <h2>PHP Assignment Operator</h2>
    <!--used with numeric value to write value to a variable-->

    <?php

    // The left operand is assigned a value to the right
    $x=20;
    echo $x;
    ?>

<h2>Comparison Operators</h2>
<!--used to compare two values(numeric to a string)-->

<?php

//equal
$x=300;
$y="300";
var_dump($x==$y);

//identical
$x=300;
$y="300";
var_dump($x===$y);

//not equal
$x=300;
$y="300";
var_dump($x!=$y);

//not equal
$x=300;
$y="300";
var_dump($x<>$y);

//not identical
$x=300;
$y="300";
var_dump($x!==$y);

//greater than
$x=300;
$y=500;
var_dump($x>$y);

//lesser than,lesser than equal to,greater than equal to
?>
<h2>Increment/Decrement Operators</h2>

<?php

//post-increment-returns the value,then increment by one
$x=10;
echo $x++;
echo "<hr/>";

//pre-increment increase value by one,then -returns the value
$x=10;
echo ++$x;
echo "<hr/>";

//Similarly for decrement operator

?>

<h2>Logical Operators</h2>
<!--used to combine conditional statements-->
<?php
// and (&&)operator
$x=200;
$y=300;

if($x==200 and $y==300)
{
    echo "True";
    echo "<hr/>";
}

// or(||) operator

$x=200;
$y=300;

if($x==200 or $y==30)
{
    echo "True";
    echo "<hr/>";
}

// not(!) operator
$x=200;
$y=300;

if($x!==300)
{
    echo "True";
    echo "<hr/>";
}
?>
<h2>PHP string operators</h2>
<!--used specifically for strings-->

<?php

//concatenation
$x="Hello";
$y=" World!";
echo $x . $y;
echo "<hr/>";

//concatenation assignment
$x="Hello";
$y=" World!";
$x .= $y;
echo $x;
echo "<hr/>";
?>

<h2>Array operators</h2>
<!--used to compare arrays-->

<?php

//union
$x=array("a"=>"blue","b"=>"red");
$y=array("c"=>"pink","d"=>"brown");

print_r($x+$y);
echo "<hr/>";

//equality-returns true if both have same key/value pairs
$x=array("a"=>"blue","b"=>"red");
$y=array("c"=>"pink","d"=>"brown");

var_dump($x==$y);
echo "<hr/>";

//identical-returns true if both have same key/value pairs in the same order and of same types
$x=array("a"=>"blue","b"=>"red");
$y=array("c"=>"pink","d"=>"brown");

var_dump($x===$y);
echo "<hr/>";

//inequality-returns true if both are not equal
$x=array("a"=>"blue","b"=>"red");
$y=array("c"=>"pink","d"=>"brown");

var_dump($x!=$y);
echo "<hr/>";

//inequality-returns true if both are not equal
$x=array("a"=>"blue","b"=>"red");
$y=array("c"=>"pink","d"=>"brown");

var_dump($x<>$y);
echo "<hr/>";

//non-identical-returns true if both are not identical
$x=array("a"=>"blue","b"=>"red");
$y=array("c"=>"pink","d"=>"brown");

var_dump($x!==$y);
echo "<hr/>";

?>

</body>
</html>