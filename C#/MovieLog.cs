using System;
using System.Collections.Generic;
using System.Runtime.Serialization;
using System.IO;

class MovieLog
{
    static void Main()
    {
        Console.Clear();
        List<Leffa> leffat = new List<Leffa>() { };
        XmlSerializer sr = new XmlSerializer(typeof(List<Leffa>));
        Menu menu = new Menu();
        int valinta = 0;

        do
        {

        Select:
            Console.Clear();
            Console.WriteLine("Leffojen Katseluloki");
            Console.WriteLine("====================");
            Console.WriteLine("1) " + menu.add());
            Console.WriteLine("2) " + menu.remove());
            Console.WriteLine("3) " + menu.show());
            Console.WriteLine("4) " + menu.load());
            Console.WriteLine("5) " + menu.save());
            Console.WriteLine("6) " + menu.exit());
            Console.Write("\nSyöte: ");


            try
            {
                valinta = Convert.ToInt32(Console.ReadLine());
            }
            catch (System.FormatException)
            {
                Console.Clear();
                Console.WriteLine("Virheellinen syöte! Yritä uudestaan.");
                Console.WriteLine("\nPaina mitä tahansa näppäinta palataksesi päävalikkoon...");
                Console.ReadKey();
                goto Select;
            }

            switch (valinta)
            {
                case 1: //add
                    Console.Clear();
                    Console.WriteLine(menu.add() + ":");

                    Console.Write("Nimi: ");
                    string nimi = Console.ReadLine();

                    Console.Write("Kesto (min): ");
                    int kesto = Convert.ToInt32(Console.ReadLine());

                    Console.Write("Vuosi: ");
                    int vuosi = Convert.ToInt32(Console.ReadLine());

                    leffat.Add(new Leffa(nimi, kesto, vuosi));
                    Console.Clear();
                    Console.WriteLine("Elokuva lisätty: " + nimi + " (" + vuosi + "), " + kesto + " minuuttia.");
                    Console.WriteLine("\nPaina mitä tahansa näppäinta palataksesi päävalikkoon...");
                    Console.ReadKey();
                    break;
                case 2: //remove
                    Console.Clear();
                    int index = 1;
                    foreach (var leffa in leffat)
                    {
                        Console.WriteLine(index + ") " + leffa.Nimi + " (" + leffa.Vuosi + "), " + leffa.Kesto + " minuuttia.");
                        index++;
                    }
                    if (leffat.Count == 0)
                    {
                        Console.WriteLine("Elokuvalista on tyhjä!");
                    }
                    else
                    {
                        Console.Write("\n" + menu.remove() + ": ");
                        int remove = Convert.ToInt32(Console.ReadLine());
                        remove--;
                        leffat.RemoveAt(remove);
                        remove++;
                        Console.WriteLine("\nElokuva numero " + remove + " poistettu!");
                    }
                    Console.WriteLine("\nPaina mitä tahansa näppäinta palataksesi päävalikkoon...");
                    Console.ReadKey();
                    break;
                case 3: //show
                    Console.Clear();
                    int i = 0;
                    int min = 0;
                    if (leffat.Count == 0)
                    {
                        Console.WriteLine("Elokuvalista on tyhjä!");
                    }
                    else
                    {
                        foreach (var leffa in leffat)
                        {
                            i++;
                            min = min + leffa.Kesto;
                            Console.WriteLine(leffa.Nimi + " (" + leffa.Vuosi + "), " + leffa.Kesto + " minuuttia.");
                        }
                        Console.WriteLine("\nLeffoja katsottu yhteensä " + i + ", yhteiskesto " + min + " minuuttia.");
                    }
                    Console.WriteLine("\nPaina mitä tahansa näppäinta palataksesi päävalikkoon...");
                    Console.ReadKey();
                    break;
                case 4: //load
                    Console.Clear();
                    Console.WriteLine(menu.load());
                    break;
                case 5: //save
                    if (leffat.Count == 0)
                    {
                        Console.WriteLine("Elokuvalista on tyhjä!");
                    }
                    else
                    {
                        using (StreamWriter sw = new StreamWriter("tietokanta.xml"))
                        {
                            sr.Serialize(sw, leffat);
                            sr.Close();
                        }
                        Console.WriteLine("Tietokanta tallennettu.");
                    }
                    Console.WriteLine("\nPaina mitä tahansa näppäinta palataksesi päävalikkoon...");
                    Console.ReadKey();
                    break;
                case 6: //exit
                    Console.Clear();
                    break;
                default: //unknown
                    Console.Clear();
                    Console.WriteLine(menu.unknown());
                    break;
            }
        } while (valinta < 6);
    }

    class Menu
    {
        private string Add = "Lisää Leffa";
        private string Remove = "Poista Leffa";
        private string Show = "Näytä Raportti";
        private string Load = "Lataa Tietokanta";
        private string Save = "Tallenna Tietokanta";
        private string Exit = "Lopeta";
        private string Unknown = "Tuntematon komento";

        public string add()
        {
            return this.Add;
        }
        public string remove()
        {
            return this.Remove;
        }
        public string show()
        {
            return this.Show;
        }
        public string load()
        {
            return this.Load;
        }
        public string save()
        {
            return this.Save;
        }
        public string exit()
        {
            return this.Exit;
        }
        public string unknown()
        {
            return this.Unknown;
        }
    }
}

[Serializable]
public class Leffa
{
    public string Nimi { get; set; }
    public int Kesto { get; set; }
    public int Vuosi { get; set; }
    public Leffa() { }
    public Leffa(string nimi, int kesto, int vuosi)
    {
        this.Nimi = nimi;
        this.Kesto = kesto;
        this.Vuosi = vuosi;
    }
}