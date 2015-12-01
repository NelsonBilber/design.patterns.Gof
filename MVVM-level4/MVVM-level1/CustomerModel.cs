using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MVVM_level1
{
    class CustomerModel
    {
        public double Amount { set; get; }
        public string CustomerName { set; get; }
        public string Married { set; get; }

        private double _Tax;
        public double Tax
        {
            get { return _Tax; }

        }

        public void CalculateTax()
        {
            if (Amount > 2000)
                _Tax = 20;
            else if (Amount >= 1000)
                _Tax = 10;
            else
                _Tax = 5;
        }

        public bool IsValid()
        {
            if (Amount < 0) return false;
            else return true;
        }
    }
}
