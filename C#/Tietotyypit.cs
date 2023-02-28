using Internal;
using System;

class Tietotyypit
{
    static void Main()
    {
        /*
        Expected output:
        Var1 on tyyppiä System.Int16
        Var2 on tyyppiä System.Byte
        Var3 on tyyppiä System.Single
        Var4 on tyyppiä System.Char
        Var5 on tyyppiä System.Boolean
        Var6 on tyyppiä System.UInt64
        Var7 on tyyppiä System.Decimal
        */

        short var1 = 50;
        byte var2 = 150;
        float var3 = -300F;
        char var4 = 'a';
        bool var5 = true;
        ulong var6 = 150000;
        decimal var7 = 24.8M;

        Console.WriteLine("Var1 on tyyppiä " + var1.GetType());
        Console.WriteLine("Var2 on tyyppiä " + var2.GetType());
        Console.WriteLine("Var3 on tyyppiä " + var3.GetType());
        Console.WriteLine("Var4 on tyyppiä " + var4.GetType());
        Console.WriteLine("Var5 on tyyppiä " + var5.GetType());
        Console.WriteLine("Var6 on tyyppiä " + var6.GetType());
        Console.WriteLine("Var7 on tyyppiä " + var7.GetType());
    }
}