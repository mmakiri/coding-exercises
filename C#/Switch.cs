using System;

class Switch
{
    static void Main()
    {
        Console.WriteLine("Valitse:\n1) Vesi\n2) Mehu\n3) Limonadi\n4) Lopeta");
        int valinta = Convert.ToInt32(Console.ReadLine());

        switch (valinta)
        {
            case 1:
                Console.WriteLine("Valitsit Vesi.");
                break;
            case 2:
                Console.WriteLine("Valitsit Mehu.");
                break;
            case 3:
                Console.WriteLine("Valitsit Limonadi.");
                break;
            case 4:
                Console.WriteLine("Lopetus!");
                break;
            default:
                break;
        }
    }
}