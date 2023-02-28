using System;
using System.IO;

class RemoveFile
{
    static void Main()
    {
        string path = ".";
        string[] rmFiles = Directory.GetFiles(path, "*.dat");

        if (rmFiles.Length > 0)
        {
            foreach (string file in rmFiles)
            {
                File.Delete(file);
            }
            Console.WriteLine(rmFiles.Length + " tiedosto(a) poistettu.");
        }
    }
}