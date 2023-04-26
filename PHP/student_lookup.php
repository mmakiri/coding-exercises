<?php
    function hae_opiskelija($opiskelija_numero) {
        $tiedosto = "opiskelijat.txt";
        $tiedoston_sisalto = file_get_contents($tiedosto);
        $rivit = explode("\n", $tiedoston_sisalto);

        foreach ($rivit as $rivi) {
            $tiedot = explode("|", $rivi);
            if ($tiedot[0] == $opiskelija_numero) {
                return $tiedot;
            }
        }

        return null;
    }

    function tulosta_opiskelija($opiskelija_tiedot) {
        if ($opiskelija_tiedot == null) {
            echo "Opiskelijanumerolla ei löytynyt ketään!";
            return;
        }

        $opiskelija_numero = $opiskelija_tiedot[0];
        $opiskelija_nimi = $opiskelija_tiedot[1];
        $ilmoittautunut_lukukaudelle = $opiskelija_tiedot[2] == 1 ? "ilmoittautunut" : "ei ole ilmoittautunut";

        echo "$opiskelija_nimi($opiskelija_numero): $ilmoittautunut_lukukaudelle\n";
    }

    if (isset($_GET["opiskelija"])) {
        $opiskelija_numero = $_GET["opiskelija"];
        $opiskelija_tiedot = hae_opiskelija($opiskelija_numero);
        tulosta_opiskelija($opiskelija_tiedot);
    }
?>