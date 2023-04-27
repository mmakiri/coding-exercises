<?php
    /*
    <form action="asiakasrekisteri.php" method="get">
    Asiakasnumero: <input TYPE="text" name="asiakasnumero"><br>
    Nimi: <input TYPE="text" name="nimi"><br>
    Osoite: <input TYPE="text" name="osoite"><br>
    <input type="hidden" name="mode" value="save">
    <input type="submit" value="Lähetä">     
    </form>
    */

    function hae_asiakas($asiakasnumero) {
        $tiedostonimi = 'asiakasrekisteri.txt';
        $tiedosto = file($tiedostonimi);
        foreach ($tiedosto as $rivi) {
            $tiedot = explode('##', $rivi);
            if ($tiedot[0] == $asiakasnumero) {
                return array('nimi' => $tiedot[1], 'osoite' => $tiedot[2]);
            }
        }
        return null;
    }
    function lisaa_asiakas($asiakasnumero, $nimi, $osoite) {
        $tiedostonimi = 'asiakasrekisteri.txt';
        $tiedosto = fopen($tiedostonimi, 'a');
        fwrite($tiedosto, $asiakasnumero . '##' . $nimi . '##' . $osoite . "\n");
        fclose($tiedosto);
    }
    function poista_asiakas($asiakasnumero) {
        $tiedostonimi = 'asiakasrekisteri.txt';
        $tiedosto = file($tiedostonimi);
        $uusi_tiedosto = fopen($tiedostonimi, 'w');
        foreach ($tiedosto as $rivi) {
            $tiedot = explode('##', $rivi);
            if ($tiedot[0] != $asiakasnumero) {
                fwrite($uusi_tiedosto, $rivi);
            }
        }
        fclose($uusi_tiedosto);
    }
    if (isset($_GET['mode'])) {
        $mode = $_GET['mode'];
        $asiakasnumero = $_GET['asiakas'];
        if ($mode == 'save') {
            $nimi = $_GET['nimi'];
            $osoite = $_GET['osoite'];
            lisaa_asiakas($asiakasnumero, $nimi, $osoite);
        } elseif ($mode == 'delete') {
            poista_asiakas($asiakasnumero);
        } else {
            $asiakas = hae_asiakas($asiakasnumero);
            if ($asiakas) {
                echo 'Asiakas: ' . $asiakas['nimi'] . ', ' . $asiakas['osoite'];
            }
        }
    }
?>
