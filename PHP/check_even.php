<?php
    /*
    <form action="parillisuus.php" method="get">
    Luku: <input TYPE="text" name="luku"><br>
    <input type="submit" value="Lähetä">     
    </form>
    */

    $luku = $_GET['luku'];

    if(!is_numeric($luku) || $luku <= 0) {
        echo "Antamasi syöte ei ollut kelvollinen!";
    } else if($luku % 2 == 0) {
        echo "Luku $luku on parillinen.";
    } else {
        echo "Luku $luku on pariton.";
    }
?>
