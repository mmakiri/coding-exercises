<?php
    $lukujono = $_GET['lukujono'];
    $taulukko = explode(',',$lukujono);

    echo "Järjestys aluksi: $lukujono\n";
   
    // suurimmasta pienimpään
    $suurin_pienin = '';
    $luvut = count($taulukko);
    for ($i = 0; $i < $luvut - 1; $i++) {
        for ($j = $i + 1; $j < $luvut; $j++) {
            if ($taulukko[$i] < $taulukko[$j]) {
                $temp = $taulukko[$i];
                $taulukko[$i] = $taulukko[$j];
                $taulukko[$j] = $temp;
            }
        }
        $suurin_pienin .= $taulukko[$i] . ",";
    }
    $suurin_pienin .= $taulukko[$luvut - 1];

    // pienimmästä suurimpaan
    $pienin_suurin = '';
    for ($i = 0; $i < $luvut - 1; $i++) {
        for ($j = $i + 1; $j < $luvut; $j++) {
            if ($taulukko[$i] > $taulukko[$j]) {
                $temp = $taulukko[$i];
                $taulukko[$i] = $taulukko[$j];
                $taulukko[$j] = $temp;
            }
        }
        $pienin_suurin .= $taulukko[$i] . ",";
    }
    $pienin_suurin .= $taulukko[$luvut - 1];

    echo "Suurimmasta pienimpään: $suurin_pienin\n";
    echo "Pienimmästä suurimpaan: $pienin_suurin\n";
?>