// Validate a user credential in php
<?php

session_start();

$conn = mysqli_connect('localhost:3306','root','','userregistration');

mysqli_select_db($conn,'userregistration');

$username = $_POST['username'];
$password = $_POST['password'];

$s = "select * from usertable where username = '$username'&& password='$password' ";

$result = mysqli_query($conn,$s);

$num = mysqli_num_rows($result);

if($num == 1){
    $_SESSION['username']=$username;
    header('location:home-gecbconfession.php');
}else{
    header('location:index.php');
}


?>