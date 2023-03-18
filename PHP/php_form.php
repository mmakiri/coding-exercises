<?php
    /*
    <form action="tulostanimi.php" method="get">
    Etunimi: <input type="text" name="enimi"><br>
    Sukunimi: <input type="text" name="snimi">
    <input type="submit" value="Lähetä">
    </form>
    */

    $etuNimi = $_GET['enimi'];
    $sukuNimi = $_GET['snimi'];
    echo "Nimesi on $etuNimi $sukuNimi";
?>