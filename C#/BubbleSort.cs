using System;

class BubbleSort
{
    static void Main(string[] args)
    {
        int n = args.Length;
        int[] lista = new int[n];

        for (int i = 0; i < n; i++)
        {
            lista[i] = int.Parse(args[i]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (lista[j] > lista[j + 1])
                {
                    int temp = lista[j];
                    lista[j] = lista[j + 1];
                    lista[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            Console.Write(lista[i] + " ");
        }
    }
}