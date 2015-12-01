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
        //Heavely Couple
        //So We need to clear all dependecies from Command
        /*
        private CustomerViewModel obj;
        public ButtonCommand(CustomerViewModel _obj)
        {
            obj = _obj;
        }
        */

        private Action WhattoExecute;
        private Func<bool> WhentoExecute;

        public ButtonCommand(Action What, Func<bool> When)
        {
            WhattoExecute = What;
            WhentoExecute = When;
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
            return WhentoExecute(); // no dependecies from ViewModel
        }

        void ICommand.Execute(object parameter)
        {
            WhattoExecute(); // no dependecies from ViewModel


        }
    }
}
