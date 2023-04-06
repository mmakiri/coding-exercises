<?php
    /*
    <form action="tulostatiedot.php" method="get">
    Valitse juomasi: <input type="radio" value="tee" name="juoma" checked>tee
    <input type="radio" value="kahvi" name="juoma">kahvi
    <br>
    Valitse määrä: 
    <select name="maara">
    <option value=1 selected>0-5</option>
    <option value=2>Yli 5</option>
    </select>
    <br>
    <input type="submit" value="Lähetä">     
    </form>
    */

    $juoma = $_GET['juoma'];
    $maara = $_GET['maara'];

    if ($juoma == 'kahvi') {
        $juomatuloste = "kahvia";
    }
    else if ($juoma == 'tee') {
        $juomatuloste = "teetä";
    }

    if ($maara == 1) {
        echo "Juot $juomatuloste kohtuullisesti";
    }
    else {
        echo "Taidat juoda $juomatuloste aika paljon";
    }

?>