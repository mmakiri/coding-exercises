<?php
    /*
    <form action="itseisarvo.php" method="get">
    Luku: <input type="text" name="luku">
    <input type="submit" value="Lähetä">
    </form>
    */

    $luku = $_GET['luku'];
    $itseisarvo = abs($luku);
    echo "Luvun $luku itseisarvo on $itseisarvo";
?>