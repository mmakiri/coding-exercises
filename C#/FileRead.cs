using System;
using System.IO;

class FileRead
{
    static void Main(string[] args)
    {
        if(args.Length == 0)
        {
            Console.WriteLine("Ei tiedostonimeä!");
            return;
        }
        string tiedostonimi = args[0];
        if (File.Exists(tiedostonimi)){
            string sisältö = File.ReadAllText(tiedostonimi);
            Console.WriteLine(sisältö);
        }
        else
        {
            Console.WriteLine("Tiedostoa ei löytynyt!"); 
        }
    }
}