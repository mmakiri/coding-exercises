using System;
using System.Collections.Generic;

class Array
{
    static void Main()
    {
        int syote;

        List<int> numerot = new List<int>();
        syote = 1;
        do
        {
            Console.Write("Syötä numero:");
            syote = Convert.ToInt32(Console.ReadLine());
            if (syote > 0)
            {
                numerot.Add(syote);
            }
        } while (syote > 0);
        Console.Write("Syöttämäsi numerot: ");
        foreach (int numero in numerot)
        {
            Console.Write(numero + " ");
        }
    }
}