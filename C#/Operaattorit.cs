using Internal;
using System;

class Operaattorit
{
    static void Main()
    {
        int a = 10;
        int b = 20;
        int c = 5;

        if ( (a !=b) && (a < b) )
        {
            if (a > c)
            {
                Console.WriteLine("Onnistui!");
            }
        }
        else
        {
            Console.WriteLine("Yrita uudestaan!");
        }
    }
}