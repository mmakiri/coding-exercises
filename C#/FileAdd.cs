using System;
using System.IO;

class FileAdd
{
    static void Main()
    {
        Console.Write("Tiedosto johon lisätään: ");
        string tiedostonimi = Console.ReadLine();

        Console.WriteLine("Syötä tiedostoon " + tiedostonimi +" lisättävä sisältö:");
        string sisältö = Console.ReadLine();

        using (StreamWriter sw = new StreamWriter(tiedostonimi, true))
        {
            sw.WriteLine(sisältö);
            sw.Close();
        }
    }
}