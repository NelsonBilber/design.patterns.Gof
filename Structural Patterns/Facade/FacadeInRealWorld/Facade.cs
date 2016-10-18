using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FacadeInRealWorld
{
    class Facade
    {
        private Bank _bank = new Bank();
        private Loan _Loan = new Loan();
        private Credit _credit = new Credit();

        public bool IsEligible(Customer cust, int amout)
        {
            Console.WriteLine(" {0} applies for {1:C} loan\n", cust.Name, amout );

            bool eligible = true;

            if (!_bank.HasSufficientSavings(cust, amout))
            {
                eligible = false;
            }
            else if (!_Loan.HasNoBadLoans(cust))
            {
                eligible = false;
            }
            else if (!_credit.HasGoodCredit(cust))
            {
                eligible = false;
            }


            return eligible;
        }
    }
}
