using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MVVM_level1
{
    public class CustomerViewModel
    {
        private CustomerModel obj = new CustomerModel();

        public string TxtCustomerName {
            get { return obj.CustomerName; }
            set { obj.CustomerName = value; }
        }

        public string TxtAmount
        {
            set { obj.Amount = Convert.ToDouble(value); }
            get { return Convert.ToString(obj.Amount); }
        }

        public string LblAmountColor {
            get
            {
                if (obj.Amount > 2000)
                    return "Blue";
                else if (obj.Amount > 1500)
                    return "Red";
                else
                    return "Yellow";
            }
        }

        public bool IsMarried
        {
            get
            {
                if (obj.Married == "Married")
                    return true;
                else
                    return false;
            }

            set {
                if (value)
                    obj.Married = "Married";
                else
                    obj.Married = "False";
            }
        }
    }
}
