#include <iostream>
#include <string>
#include "Sales_data.h"
using namespace std;

int main()
{
    Sales_data total;
    if (cin >> total.bookNo >> total.units_sold >> total.revenue)
    {

        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
        {
            if (total.bookNo == trans.bookNo)
            {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
                // cout << total.revenue;
            }
            else
            {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " << total.revenue/total.units_sold << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " << total.revenue/total.units_sold << endl;
    }
    else
    {
        cout << "NO data?!" << endl;
    }

    return 0;
}