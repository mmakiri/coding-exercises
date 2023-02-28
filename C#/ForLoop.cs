using System;

class ForLoop
{
    static void Main(string[] args)
    {
        uint loop = Convert.ToUInt32(args[0]);

        for (int i=1; i<=loop; i++)
        {
            for (int j=1; j<=i; j++)
            {
                Console.Write(j);
            }
            Console.Write("\n\r");
        }
    }
}