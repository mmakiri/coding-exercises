<?php
    $teksti = "Lainausmerkkien(\" ja \") sisällä voi käyttää kenoviivalla(\\) merkittyjä erikoiskoodeja.\n";
    $a = array(9,7,5);
    $lkm = count($a);
    $elain = "kissa";

    $tulostus = implode(",", $a);
    echo $teksti;
    echo "Ostin $lkm {$elain}a.\n";
    echo "Taulukon sisältö: $tulostus";
?>