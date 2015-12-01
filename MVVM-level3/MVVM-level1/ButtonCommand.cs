using System;
using System.Windows.Input;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MVVM_level1
{
    public class ButtonCommand : ICommand
    {
        private CustomerViewModel obj;
        public ButtonCommand(CustomerViewModel _obj) //Heavely Couple
        {
            obj = _obj;
        }

        event EventHandler ICommand.CanExecuteChanged
        {
            add
            {
               // throw new NotImplementedException();
            }

            remove
            {
               // throw new NotImplementedException();
            }
        }

        bool ICommand.CanExecute(object parameter)
        {
            return true;
        }

        void ICommand.Execute(object parameter)
        {
            obj.Calculate();
        }
    }
}
