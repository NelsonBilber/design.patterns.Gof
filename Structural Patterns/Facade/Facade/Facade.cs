using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


//http://www.dofactory.com/net/facade-design-pattern

/*
 Provide a unified interface to a set of interfaces in a subsystem. Façade 
 defines a higher-level interface that makes the subsystem easier to use.
 */

namespace Facade
{
    class Facade
    {
        private SubSystemA sa_;
        private SubSystemB sb_;

        public Facade()
        {
            sa_ = new SubSystemA();
            sb_ = new SubSystemB();
        }

        public void m1() {
            Console.WriteLine("message from method 01 .... ");
            sa_.PrintA(); 
        }
        public void m2() {
            Console.WriteLine("message from method 02 .... ");
            sb_.PrintB(); sa_.PrintA(); 
        }

    }
}
