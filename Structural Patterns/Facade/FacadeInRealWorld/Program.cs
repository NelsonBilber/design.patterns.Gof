using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FacadeInRealWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            Facade facade = new Facade();

            Customer customer = new Customer("Nelson Rodrigues");

            bool eligible = facade.IsEligible(customer, 125000);

            Console.WriteLine("\n" + customer.Name + " has been " + (eligible ? " Approved" : " Rejected"));
        }
    }
}
