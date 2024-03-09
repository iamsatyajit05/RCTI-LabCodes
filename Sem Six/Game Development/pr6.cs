using System;
using System.Threading;

class Program {
    // Constants
    const int MaxIterations = 5;

    // Variables
    static int globalVariable = 0;

    static void Main() {
        // Input
        Console.Write("Enter a value for globalVariable: ");
        if (int.TryParse(Console.ReadLine(), out globalVariable)) {
            // Conditions
            if (globalVariable == 0) {
                Console.WriteLine("Entered value is zero.");
            } else {
                Console.WriteLine($"Entered value is not zero. It is: {globalVariable}");
            }

            // Loops
            for (int i = 0; i < MaxIterations; i++) {
                Console.WriteLine($"Iteration {i + 1}");
            }

            // Arrays
            int[] numbers = { 1, 2, 3, 4, 5 };
            Console.WriteLine("Array elements:");
            foreach (var number in numbers) {
                Console.Write($"{number} ");
            }
            Console.WriteLine();

            // Function
            int result = AddNumbers(10, 5);
            Console.WriteLine($"Result of adding numbers: {result}");

            // Class/Objects
            MyClass myObject = new MyClass("Sample Object");
            myObject.DisplayMessage();

            // Inheritance
            DerivedClass derivedObject = new DerivedClass("Derived Object");
            derivedObject.DisplayMessage();

            // Multithreading
            Thread thread1 = new Thread(CountNumbers);
            Thread thread2 = new Thread(CountLetters);

            thread1.Start();
            thread2.Start();

            thread1.Join();
            thread2.Join();

            Console.WriteLine("Main thread completed.");
        } else {
            Console.WriteLine("Invalid input. Please enter a valid integer.");
        }

        Console.ReadLine();
    }

    // Function
    static int AddNumbers(int a, int b) {
        return a + b;
    }

    // Class/Objects
    class MyClass {
        private string message;

        public MyClass(string msg) {
            message = msg;
        }

        public void DisplayMessage() {
            Console.WriteLine($"Class Message: {message}");
        }
    }

    // Inheritance
    class DerivedClass : MyClass {
        public DerivedClass(string msg) : base(msg) { }
    }

    // Multithreading
    static void CountNumbers() {
        for (int i = 1; i <= 5; i++) {
            Console.WriteLine($"Thread 1: Counting {i}");
            Thread.Sleep(100);
        }
    }

    static void CountLetters() {
        for (char c = 'A'; c <= 'E'; c++) {
            Console.WriteLine($"Thread 2: Counting {c}");
            Thread.Sleep(150);
        }
    }
}