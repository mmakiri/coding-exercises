<?php
    function uusiarvo(&$merkkijono) {
        echo "Merkkijono aluksi: $merkkijono";
        $merkkijono = "Uusi merkkijono\n";
    }

    $merkkijono = "aluksi\n";
    uusiarvo($merkkijono);
    echo "Merkkijono lopuksi: $merkkijono";
?>