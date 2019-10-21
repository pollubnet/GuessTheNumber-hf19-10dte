using System;

namespace GuessTheNumber
{
    class Program
    {
        static void Main(string[] args)
        {
            Random r = new Random();
            int n = r.Next(1,101);

            bool w = false;
            int i = 0;

            do
            {
                Console.Write("Podaj liczbę: ");
                string s = Console.ReadLine();
                i++;

                int l = int.Parse(s);
                
                if (l > n)
                {
                    Console.WriteLine("Za dużo!");
                }
                else if (l < n)
                {
                    Console.WriteLine("Za mało!");
                }
                else
                {
                    Console.WriteLine("Wygrałeś w {0} probie!", i);
                    w = true;
                }

            }
            while (w == false);
        }
    }
}
