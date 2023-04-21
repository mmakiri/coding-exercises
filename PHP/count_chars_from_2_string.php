<?php
	/*
	<form action="merkkijono.php" method="get">
	Ensimmäinen merkkijono: <input TYPE="text" name="merkkijono1"><br>
	Toinen merkkijono: <input TYPE="text" name="merkkijono2"><br>
	<input type="submit" value="Lähetä">     
	</form>
	*/

    if(isset($_GET['merkkijono1']) && isset($_GET['merkkijono2'])) {
		$merkkijono1 = trim($_GET['merkkijono1']);
		$merkkijono2 = trim($_GET['merkkijono2']);	

		$pituus_yhteensa = strlen($merkkijono1) + strlen($merkkijono2);
		$merkkijonot = "\"$merkkijono1\" ja \"$merkkijono2\"";
		
		echo "Antamasi merkkijonot olivat $merkkijonot. Niiden pituus yhteensä on $pituus_yhteensa merkkiä!";
    } else echo "Et antanut molempia merkkijonoja!";

?>
