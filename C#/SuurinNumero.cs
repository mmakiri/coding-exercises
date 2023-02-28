using System;

class SuurinNumero
{
    static void Main()
    {
        int numero1, numero2;

        Console.WriteLine("Syötä ensimmäinen numero: ");
        numero1 = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Syötä toinen numero: ");
        numero2 = Convert.ToInt32(Console.ReadLine());

        if (numero1 == numero2)
        {
            Console.WriteLine("Numerot ovat yhtä suuret.");
        }

        if (numero1 > numero2)
        {
            Console.WriteLine("Numero 1 on suurempi kuin numero 2.");
        }

        if (numero1 < numero2)
        {
            Console.WriteLine("Numero 2 on suurempi kuin numero 1.");
        }
    }
}