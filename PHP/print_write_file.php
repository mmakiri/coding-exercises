<?php
    $arvosanat_tiedosto = fopen("arvosanat.txt", "r");
    $arvosanat = array();
    while (!feof($arvosanat_tiedosto)) {
        $rivi = fgets($arvosanat_tiedosto);
        if (!empty($rivi)) {
            $arvosana = intval($rivi);
            if ($arvosana < 5) {
                $arvosana++;
            }
            array_push($arvosanat, $arvosana);
        }
    }
    fclose($arvosanat_tiedosto);

    $tulokset_tiedosto = fopen("tulokset.txt", "w");
    foreach ($arvosanat as $arvosana) {
        fwrite($tulokset_tiedosto, $arvosana . "\n");
    }
    fclose($tulokset_tiedosto);

    echo "Uudet arvosanat:\n";
    foreach ($arvosanat as $arvosana) {
        echo $arvosana . "\n";
    }
?>
