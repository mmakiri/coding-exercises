<?php
    /*
    <form action="vieraskirja.php" method="get">
    Lähettäjä: <input TYPE="text" name="nimi"><br>
    Viesti: <input type="text" name="viesti"><br>
    <input type="submit" value="Lähetä">     
    </form>
    */

    $nimi = $_GET['nimi'];
    $viesti = $_GET['viesti'];

    if ($nimi && $viesti) {
        echo "$nimi: $viesti";
    } else echo "Et antanut kaikkia tietoja!";
?>