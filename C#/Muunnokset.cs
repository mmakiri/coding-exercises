using Internal;
using System;

class Muunnokset
{
    static void Main()
    {
        /*
        var1 = 8-bittinen etumerkillinen kokonaisluku
        var2 = 64-bittinen etumerkillinen kokonaisluku
        var3 = 16-bittinen etumerkitön kokonaisluku
        var4 = 64-bittinen double-precision liukuluku
        */

        sbyte var1 = -50;
        long var2 = -300000;
        ushort var3 = 200;
        double var4 = -1.530D;


        if (var1.GetType() == typeof(SByte))
        {
            Console.WriteLine("var1 tyyppi ok.");
        }
        if (var2.GetType() == typeof(Int64))
        {
            Console.WriteLine("var2 tyyppi ok.");
        }
        if (var3.GetType() == typeof(UInt16))
        {
            Console.WriteLine("var3 tyyppi ok.");
        }
        if (var4.GetType() == typeof(Double))
        {
            Console.WriteLine("var4 tyyppi ok.");
        }
    }
}