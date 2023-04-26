<?php 
    /*
    <form action="merkkijonot.php" method="get">
    Anna merkkijono: <input TYPE="text" NAME="merkkijono">
    <br>
    Valitse toiminto: 
    <select name="mode">
    <option value=1 selected>harvana pieninä</option>
    <option value=2>harvana isoina</option>
    <option value=3>takaperin pieninä</option>
    <option value=4>takaperin isoina</option>
    </select>
    <br>
    <input type="submit" value="Lähetä">     
    </form>
    */

    $merkkijono = $_GET['merkkijono'];
    $mode = $_GET['mode'];

    if ($mode == 1) { // harvana pieninä
        echo strtolower(str_replace('', ' ', $merkkijono));
    } elseif ($mode == 2) { // harvana isoina
        echo strtoupper(str_replace('', ' ', $merkkijono));
    } elseif ($mode == 3) { // takaperin pieninä
        echo strtolower(strrev($merkkijono));
    } elseif ($mode == 4) { // takaperin isoina
        echo strtoupper(strrev($merkkijono));
    } else echo 'Virheellinen valinta';
?>