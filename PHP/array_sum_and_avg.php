<?php

    $lukujono = $_GET['lukujono'];
    $lukutaulukko = explode(',',$lukujono);

    $summa = 0;
    $pisteet = '';
    foreach ($lukutaulukko as $luku) {
        $summa += $luku;
        $pisteet .= $luku . ' ';
    }

    $lukumaara = count($lukutaulukko);
    $keskiarvo = $summa / $lukumaara;

    echo "Pisteet olivat: $pisteet\n";
    echo "Pisteiden summa: $summa\n";
    echo "Pisteiden keskiarvo: $keskiarvo";
?>