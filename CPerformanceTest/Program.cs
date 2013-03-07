using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;

namespace CPerformanceTest
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("CLI..........................");
            var cliTest = new CLIManagedTest();
            TestMetric(numberOfExecutions => cliTest.GetWindowsVersion(numberOfExecutions));

            Console.WriteLine("COM..........................");
            var comTest = new COMTestLib.COMManagedTest();
            TestMetric(numberOfExecutions => comTest.GetWindowsVersion(numberOfExecutions));

            Console.WriteLine("CLI to native................");
            var cliToNative = new CLIToNativeClass();
            TestMetric(numberOfExecutions => cliToNative.GetWindowsVersion(numberOfExecutions));

            Console.ReadLine();
        }

        static TimeSpan TimeTask(Action task)
        {
            var stopWatch = new Stopwatch();
            stopWatch.Start();
            task();
            stopWatch.Stop();
            return TimeSpan.FromMilliseconds(stopWatch.ElapsedMilliseconds);
        }

        static void TestMetric(Action<int> execute)
        {
            Console.WriteLine("     GetWindowsVersion:");
            Console.WriteLine("         Calls: " + 100000);
            Console.WriteLine("         Executions: " + 1);
            var time = TimeTask(() => {
                for (var x = 0; x < 100000; x++)
                {
                    execute(1);
                }
            });
            Console.WriteLine("         Result: " + time.ToString());

            Console.WriteLine("     GetWindowsVersion:");
            Console.WriteLine("         Calls: " + 1);
            Console.WriteLine("         Executions: " + 100000000);
            time = TimeTask(() =>
            {
                execute(100000000);
            });
            Console.WriteLine("         Result: " + time.ToString());
        }
    }
}
