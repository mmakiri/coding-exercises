using System;

class Kvadrantit
{
    static void Main()
    {
        Console.WriteLine("Löydä xy-akseleilla olevan pisteen kvadrantti:");
        Console.Write("X-koordinaatti: ");
        int x = Convert.ToInt32(Console.ReadLine());
        Console.Write("Y-koordinaatti: ");
        int y = Convert.ToInt32(Console.ReadLine());

        if (x == 0 && y == 0) // origo
        {
            Console.WriteLine("Koordinaattipiste (" + x + "," + y + ") on origossa.");
        }
        
        if (x > 0 && y > 0) // 1 kvadrantti
        {
            Console.WriteLine("Koordinaattipiste (" + x + "," + y + ") on kvadrantissa 1.");
        }

        if (x < 0 && y > 0) // 2 kvadrantti
        {
            Console.WriteLine("Koordinaattipiste (" + x + "," + y + ") on kvadrantissa 2.");
        }

        if (x < 0 && y < 0) // 3 kvadrantti
        {
            Console.WriteLine("Koordinaattipiste (" + x + "," + y + ") on kvadrantissa 3.");
        }

        if (x > 0 && y < 0) // 4 kvadrantti
        {
            Console.WriteLine("Koordinaattipiste (" + x + "," + y + ") on kvadrantissa 4.");
        }
    }
}