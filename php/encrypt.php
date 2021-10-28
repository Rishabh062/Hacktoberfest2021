<?php

function encrypt_string($string)
{
    if (!$string) {
        return "Please input valid string.";
    }

    return password_hash($string, PASSWORD_BCRYPT);
}


echo encrypt_string("lorem ipsum");
