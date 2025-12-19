<?php
      $str ="This is a string";
      echo $str;
      echo "<br>";
      $len = strlen($str);
    //   with . we're doing concatination
      echo "The length of the string is:  ".$len."Thank you"."<br>";
    //   echo $len;
    echo "The length of the string word count is:  ".str_word_count($str)."<br>";
    echo "The reverse string is: ",strrev($str)."<br>";
    echo "The position of string is: ".strpos($str,"is")."<br>";
    echo "The replacement of any string: ".str_replace("is","i",$str)."<br>";
?>  