using System;
using System.IO;

class CreateFile
{
    static void Main()
    {
        Console.Write("Tiedostonimi: ");
        string tiedostonimi = Console.ReadLine();

        Console.WriteLine("Sisalto tiedostolle " + tiedostonimi + ":");
        string sisältö = Console.ReadLine();

        using (StreamWriter sw = new StreamWriter(tiedostonimi))
        {
            sw.Write(sisältö);
            sw.Close();
        }
    }
}