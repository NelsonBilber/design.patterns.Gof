using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace MVVM_level1
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();

            /* all binding is done by static resources using XAML */

            /*
            CustomerViewModel obj = new CustomerViewModel();
            obj.TxtCustomerName = "Nelson";
            obj.TxtAmount = "2000";

            lblName.Content = obj.TxtCustomerName;
            lblAmount.Content = obj.TxtAmount;
            BrushConverter bc = new BrushConverter();
            labelHabits.Background = bc.ConvertFromString(obj.LblAmountColor) as SolidColorBrush;
            chkMarried.IsChecked = obj.IsMarried;
            */
        }
    }
}
