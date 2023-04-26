<?php
    $eka = $_GET['eka'];
    $toka = $_GET['toka'];
    $kolmas = $_GET['kolmas'];

    function suurin($a, $b, $c) {
        return max($a, $b, $c);
    }

    function pienin($a, $b, $c) {
        return min($a, $b, $c);
    }

    $suurin_luku = suurin($eka, $toka, $kolmas); 
    $pienin_luku = pienin($eka, $toka, $kolmas);

    echo "Syöttämistäsi luvuista suurin oli $suurin_luku"; 
    echo " ja pienin $pienin_luku";
?>