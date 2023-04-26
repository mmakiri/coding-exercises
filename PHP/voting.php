<?php
    if (isset($_GET['ehdokas'])) {
        $tulokset = file("tulokset.txt");

        $valittu = $_GET['ehdokas'];
        $tulokset[$valittu-1] = $valittu . "|" . ((int)explode("|", $tulokset[$valittu-1])[1] + 1);
        file_put_contents("tulokset.txt", implode("\n", $tulokset));

        $aanet = 0;
        foreach ($tulokset as $tulos) {
            $aanet += (int)explode("|", $tulos)[1];
        }

        echo "Ääniä annettu yhteensä: $aanet kappaletta.";
    }
?>