<?php
    $filename = "koe.txt";
    $file = fopen($filename, "r");

    $sum = 0;
    $count = 0;
    $scores = [];

    while (!feof($file)) {
        $line = fgets($file);
        $parts = explode("|", $line);
        $student_number = $parts[0];
        $score = array_sum(array_slice($parts, 1));
        $scores[$student_number] = $score;
        $sum += $score;
        $count++;
    }

    fclose($file);

    echo "Opiskelijoita oli $count:\n";
    foreach ($scores as $student_number => $score) {
        echo "$student_number: $score pistettä\n";
    }
    $average = $sum / $count;
    echo "\nOpiskelijoiden keskiarvo oli $average pistettä.\n";
?>
