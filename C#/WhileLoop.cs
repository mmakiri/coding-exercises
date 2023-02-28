using System;

class WhileLoop
{
    static void Main()
    {
        int summa = 0;
        int syöte;
        while (summa < 200)
        {
            Console.Write("Summa on nyt " + summa + ". Syöte: ");
            syöte = Convert.ToInt32(Console.ReadLine());
            summa = summa + syöte;
        }
        Console.WriteLine("Saavutettiin 200. Summa oli " + summa + ".");
    }
}