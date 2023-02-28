using System;
using System.Collections.Generic;

class EditArray
{
    static void Main()
    {
        List<string> nimet = new List<string> { "Torvalds", "Musk", "Gates", "Buffet", "Dorsey" };

        nimet[0] = "Jobs";
        nimet[2] = "McAfee";
        nimet[4] = "Wozniak";

        

        foreach (string nimi in nimet)
        {
            Console.WriteLine(nimi);
        }
    }
}

/*
Jobs
Musk
McAfee
Buffet
Wozniak
*/