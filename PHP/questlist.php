<?php
    /*
    <form action="vieraskirja.php" method="get">
    Lähettäjä: <input TYPE="text" name="lahettaja"><br>
    Viesti: <input TYPE="text" name="viesti"><br>
    <input type="hidden" name="mode" value="save">
    <input type="submit" value="Lähetä">     
    </form>
    */

    if ($_GET['mode'] == 'save') {
        $lahettaja = trim(strip_tags($_GET['lahettaja']));
        $viesti = trim(strip_tags($_GET['viesti']));
        $rivi = $lahettaja . '|' . $viesti . "\n";
        file_put_contents('vieraskirja.txt', $rivi, FILE_APPEND);
    } else {
        $vieraskirja = file('vieraskirja.txt');
        foreach ($vieraskirja as $rivi) {
            list($lahettaja, $viesti) = explode('|', $rivi);
            echo trim($lahettaja) . ': ' . trim($viesti) . "\n";
        }
    }
?>