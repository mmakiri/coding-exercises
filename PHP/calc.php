<?php
    /*
    <form action="laskukone.php" method="get">
    <input TYPE="text" name="ekaluku">
    <select name="operator">
    <option value=1 selected>+</option>
    <option value=2>-</option>
    <option value=3>*</option>
    <option value=4>/</option>
    </select>
    <input TYPE="text" name="tokaluku">
    <input type="submit" value="Lähetä">     
    </form>
    */
    
    $ekaluku = $_GET['ekaluku'];
    $tokaluku = $_GET['tokaluku'];
    $operator = $_GET['operator'];
    $tulos = null;

    if (is_numeric($ekaluku) && is_numeric($tokaluku)) {
        switch ($operator) {
        case 1:
            $tulos = $ekaluku + $tokaluku;
            $merkki = "+";
            break;
        case 2:
            $tulos = $ekaluku - $tokaluku;
            $merkki = "-";
            break;
        case 3:
            $tulos = $ekaluku * $tokaluku;
            $merkki = "*";
            break;
        case 4:
            if ($tokaluku == 0) {
            echo "Et voi jakaa nollalla!";
            exit();
            }
            $tulos = $ekaluku / $tokaluku;
            $merkki = "/";
            break;
        default:
            echo "Virheellinen operaattori!";
            exit();
        }
        echo $ekaluku . " " . $merkki . " " . $tokaluku . " = " . $tulos;
    } else {
        echo "Et antanut molempia lukuja!";
    }
?>
