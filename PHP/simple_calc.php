<?php
    /*
    <form action="laskutoimituksia.php" method="get">
    Ensimmäinen luku: <input type="text" name="ekaluku">
    Toinen luku: <input type="text" name="tokaluku">
    <input type="submit" value="Lähetä">
    </form>

    2 luvun kerto sekä jakolaskutoimitukset peräkkäin
    */

    $luku_1 = $_GET['ekaluku'];
    $luku_2 = $_GET['tokaluku'];

    $tulos = $luku_1 * $luku_2;
    echo "Kertolaskun tulos: $tulos\n";

    if ($luku_1 == 0 || $luku_2 == 0) {
        $tulos = "Nollalla ei saa jakaa";
    }
    else {
        $tulos = $luku_1 / $luku_2;
    }
    echo "Jakolaskun tulos: $tulos";

?>