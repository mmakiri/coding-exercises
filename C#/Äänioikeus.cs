using Internal;
using System;

class Äänioikeus
{
    static void Main()
    {
        byte ikä;

        Console.WriteLine("Syötä ikäsi, ole hyvä: ");
        ikä = Convert.ToByte(Console.ReadLine());

        if (ikä >= 18)
        {
            Console.WriteLine("Voit äänestää!");
        }
        else return;
    }
}
