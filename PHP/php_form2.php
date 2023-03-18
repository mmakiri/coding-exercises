<?php
    /*
    <form action="lempiasiat.php" method="get">
    Lempiväri: <input type="text" name="lempivari"><br>
    Lempiruoka: <input type="text" name="lempiruoka">
    <input type="submit" value="Lähetä">
    </form>
    */

    $vari = $_GET['lempivari'];
    $ruoka = $_GET['lempiruoka'];
    echo "Lempivärisi on $vari ja lempiruokasi on $ruoka";
?>