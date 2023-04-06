<?php
    /*
    <form action="luvut.php" method="get">
    Luku: <input TYPE="text" name="luku"><br>
    <input type="submit" value="Lähetä">     
    </form>
    */

    $luku = $_GET['luku'];

    if ($luku < 0) {
        echo "Luvun pitää olla vähintään nolla!";
    }
    else {
        for ($i = $luku; $i >= 0; $i--) {
            echo $i;

            if($i !== 0) {
              echo " ";
            }
        }
    }
?>