using Internal;
using System;

class Operaattorit2
{
    static void Main()
    {
        int x = 20;

        int y = 20;

        int z = 30;

        string s = "C";

        if (((x >= y) && (y < z)) || ((x > y) && (s == "A")) )
        {
            if (s == "C")
            {
                Console.WriteLine("Onnistui!");
            }
            else
            {
                Console.WriteLine("Melkein!");
            }
        }
        else
        {
            Console.WriteLine("Ei iha, yritä vielä!");
        }
    }
}