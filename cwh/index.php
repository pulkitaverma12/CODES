<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<style>
    *{
        margin: 0;
        padding: 0;
        box-sizing: border-box;
    }
    .container
    {
        max-width: 80%;
        background-color: #e2cbcbff;
        margin: auto;
        padding: 24px;
    }
</style>
<body>
    <div class="container">
        <h1>I'm Pulkita Verma</h1>
        <p>Your Party Status here.</p>
        <?php
        $age = 19;
        if($age>19)
        {
            echo " you can go to party!";
        }
        else
        {
            echo " you cannot go to party!";

        }
        // arrays in php
        echo "<br>";
        $languages = array("python","c++","php","Java");
        echo "$languages[3]";
        echo"<br>";
        echo count($languages);
        echo "<br>";
        // loops in php
        // while loop
        $a=0;
        while($a <= 10)
        {
            echo " the value is: ";
            echo $a;
            $a++;
            echo "<br>";
        }
        echo "<br>";
        // loop with array
        $a=0;
        while($a <count($languages))
        {
            echo " the value is: ";
            echo $languages[$a];
            $a++;
            echo "<br>";
        }
        // do while loop
        echo "<br>";
        $a= 0;
        do{
            echo "<br>";
            echo $languages[$a];
            $a++;
        }while($a < count($languages));
        // for loop
        echo "<br>";
        for($a=0; $a < count($languages); $a++)
        {
            echo " the value is: ";
            echo $languages[$a];
            echo "<br>";
        }
        // foreach loop
        echo "<br>";
        foreach($languages as $value)
        {
            echo "<br>";
            echo "the values of array are with foreach: ";
            echo $value;
        }
        echo "<br>";
        function print5()
        {
            echo "<br>";
            echo "FIVE";
        }
        print5();
        function print_number($number)
        {
            echo"<br>";
            echo "your number is: ";
            echo $number;
        }
        print_number(67);


        ?>
    </div>
</body>
</html>