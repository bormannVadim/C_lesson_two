using System;

namespace C_Sharp_task_one
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(DecToBin(10));    
        }

        public static string DecToBin(int num)
        {
            if (num % 2 != 1)
            {
                DecToBin(num / 2);
                return DecToBin(num % 2);
            }

            return "";
        }

    }
}
