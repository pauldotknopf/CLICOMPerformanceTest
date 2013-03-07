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
            var cliTest = new CLIManagedTest();
            Console.WriteLine("CLI..........................");
            Console.WriteLine("GetWindowsVersion:   Call 1:         Exections:  10000000");
            var time = TimeTask(() => cliTest.GetWindowsVersion(10000000));
            Console.WriteLine(time.ToString());
            Console.WriteLine("GetWindowsVersion:   Call 10000:     Exections:  1");
            time = TimeTask(() =>
            {
                for (var x = 0; x < 10000; x++)
                {
                    cliTest.GetWindowsVersion(1);
                }
            });
            Console.WriteLine(time.ToString());

            var comTest = new COMTestLib.COMManagedTest();
            Console.WriteLine("COM..........................");
            Console.WriteLine("GetWindowsVersion:   Call 1:         Exections:  10000000");
            time = TimeTask(() => comTest.GetWindowsVersion(10000000));
            Console.WriteLine(time.ToString());
            Console.WriteLine("GetWindowsVersion:   Call 10000:     Exections:  1");
            time = TimeTask(() =>
                {
                    for (var x = 0; x < 10000; x++)
                    {
                        comTest.GetWindowsVersion(1);
                    }
                });
            Console.WriteLine(time.ToString());

            var cliToNative = new CLIToNativeClass();
            Console.WriteLine("CLI to native................");
            Console.WriteLine("GetWindowsVersion:   Call 1:         Exections:  10000000");
            time = TimeTask(() => cliToNative.GetWindowsVersion(10000000));
            Console.WriteLine(time.ToString());
            Console.WriteLine("GetWindowsVersion:   Call 10000:     Exections:  1");
            time = TimeTask(() =>
            {
                for (var x = 0; x < 10000; x++)
                {
                    cliToNative.GetWindowsVersion(1);
                }
            });
            Console.WriteLine(time.ToString());

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
    }
}
