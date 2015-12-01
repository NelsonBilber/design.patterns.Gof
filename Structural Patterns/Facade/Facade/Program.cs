using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Facade
{
    class Program
    {
        static void Main(string[] args)
        {
            Facade ff = new Facade();
            ff.m1();
            ff.m2();      
            Console.WriteLine(ff.GetType());
        }
    }
}
