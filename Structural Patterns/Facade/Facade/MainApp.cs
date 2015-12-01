using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Facade
{
    class MainApp
    {
        public MainApp()
        {
            Facade facade = new Facade();
            facade.m1();
            facade.m2();

            Console.ReadKey();
        }
    }
}
