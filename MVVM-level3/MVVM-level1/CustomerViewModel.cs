using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.ComponentModel;
using System.Windows.Input;


namespace MVVM_level1
{
    public class CustomerViewModel: INotifyPropertyChanged
    {
        private CustomerModel obj = new CustomerModel();

        public event PropertyChangedEventHandler PropertyChanged;

        //Expose Command that can be consumed on XAML
        private ButtonCommand objCommand;
        public CustomerViewModel()
        {
            objCommand = new ButtonCommand(this);
        }

        public ICommand btnClick
        {
            get { return objCommand; }
        }

        public string TxtCustomerName {
            get { return obj.CustomerName; }
            set { obj.CustomerName = value; }
        }

        public string Tax {
            get { return Convert.ToString(obj.Tax); }
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

        public void Calculate()
        {
            obj.CalculateTax();

            //Event - the view model notifies the View that model has cheged
            //Using WPF data binding system
            if (PropertyChanged != null)
                PropertyChanged(this, new PropertyChangedEventArgs("Tax"));
        }
    }
}
