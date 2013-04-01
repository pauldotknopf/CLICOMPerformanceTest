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
            var test = new CLIManagedTest();

            Console.WriteLine("GetWindowsVersion:   Call 1:         Exections:  1000000");
            var time = TimeTask(() => test.GetWindowsVersion(1000000));
            Console.WriteLine(time.ToString());

            Console.WriteLine("GetWindowsVersion:   Call 1000000:   Exections:  1");
            time = TimeTask(() => test.GetWindowsVersion(1000000));
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
