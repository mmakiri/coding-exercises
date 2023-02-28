using System;

class TorakkaJalkaYdinase
{
    static void Main()
    {
        Console.WriteLine("Torakka-Jalka-Ydinase. Valitse 1-4.\n1) Torakka 2) Jalka 3) Ydinase 4) Poistu");
        int valinta = Convert.ToInt32(Console.ReadLine());

        Random random = new Random();
        int tietokonevalinta = random.Next(1, 4);

        switch (valinta)
        {
            case 1: // Torakka
                Console.WriteLine(valinta + " Torakka!");
                if (tietokonevalinta == 1) //tasapeli
                {
                    Console.WriteLine("Tietokone valitsi: Torakka. Tasapeli!");
                }
                if (tietokonevalinta == 2) //häviö
                {
                    Console.WriteLine("Tietokone valitsi: Jalka. Hävisit!");
                }
                if (tietokonevalinta == 3) //voitto
                {
                    Console.WriteLine("Tietokone valitsi: Ydinase. Voitit!");
                }
                break;

            case 2: // Jalka
                Console.WriteLine(valinta + " Jalka!");
                if (tietokonevalinta == 1) //voitto
                {
                    Console.WriteLine("Tietokone valitsi: Torakka. Voitit!");
                }
                if (tietokonevalinta == 2) //tasapeli
                {
                    Console.WriteLine("Tietokone valitsi: Jalka. Tasapeli!");
                }
                if (tietokonevalinta == 3) //häviö
                {
                    Console.WriteLine("Tietokone valitsi: Ydinase. Hävisit!");
                }
                break;

            case 3: // Ydinase
                Console.WriteLine(valinta + " Ydinase!");
                if (tietokonevalinta == 1) //häviö
                {
                    Console.WriteLine("Tietokone valitsi: Torakka. Hävisit!");
                }
                if (tietokonevalinta == 2) //voitto
                {
                    Console.WriteLine("Tietokone valitsi: Jalka. Voitit!");
                }
                if (tietokonevalinta == 3) //tasapeli
                {
                    Console.WriteLine("Tietokone valitsi: Ydinase. Tasapeli!");
                }
                break;

            case 4: // Poistu
                break;
            default:
                break;
        }
    }
}