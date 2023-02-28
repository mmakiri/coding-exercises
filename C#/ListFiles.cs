using System;
using System.IO;

class ListFiles
{
    static void Main()
    {
        string path = ".";
        string[] dirList = Directory.GetFiles(path, "*.*");

        if (dirList.Length > 0)
        {
            foreach (string file in dirList)
            {
                Console.WriteLine(file);
            }
        }
    }
}