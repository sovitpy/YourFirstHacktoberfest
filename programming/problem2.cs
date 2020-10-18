// "String Concatenation!"

// Write a program in C# to concatenate two strings from user input!

using System;

namespace Exercises
{
    public static class Program
    {
        private static void Main(string[] args)
        {
            Console.WriteLine("Enter your first name:");
            var firstName = Console.ReadLine();
            Console.WriteLine("Enter your last name:");
            var lastName = Console.ReadLine();
            Console.WriteLine("Hello " + firstName + " " + lastName);
        }
    }
}
