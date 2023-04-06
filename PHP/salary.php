<?php
    /*
    <form action="palkanlaskenta.php" method="get">
    Tehtyjen työtuntien määrä: <input type="text" name="tunnit">
    Tuntipalkka: <input type="text" name="tuntipalkka">
    Veroprosentti: <input type="text" name="veroprosentti">
    <input type="submit" value="Lähetä">
    </form>
    */

    $tunnit = $_GET['tunnit'];
    $tunti_palkka = $_GET['tuntipalkka'];
    $veroprosentti = $_GET['veroprosentti'];

    if ($tunnit && $tunti_palkka && $veroprosentti) {
        $brutto = $tunnit * $tunti_palkka;
        $vero = $brutto * $veroprosentti / 100;
        $netto = $brutto - $vero;

        echo "Palkka ilman veroja: $brutto\nVeron osuus palkasta: $vero\nPalkka verojen jälkeen: $netto";
    } else echo "Et antanut kaikkia tietoja!";

?>