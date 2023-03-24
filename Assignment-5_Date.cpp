#include <conio.h>
#include <iostream>
using namespace std;
class date
{
    int dd, mm, yyyy;

public:
    date(int d, int m, int y) 
    {
        dd = d;
        mm = m;
        yyyy = y;
    }
    void disp()
    {
        if (mm > 12)
            cout << "Invalid Month."; // month if it is greater than 12 then it is invalid.
        else
            cout << "Input   : " << dd << "-" << mm << "-" << yyyy << endl;
        if (mm == 1)
        {
            cout << "Output  : " << dd << "-"
                 << "Jan"
                 << "-" << yyyy;
        }
        else if (mm == 2)
        {
            cout << "Output  : " << dd << "-"
                 << "Feb"
                 << "-" << yyyy;
        }
        else if (mm == 3)
        {
            cout << "Output  : " << dd << "-"
                 << "Mar"
                 << "-" << yyyy;
        }
        else if (mm == 4)
        {
            cout << "Output  : " << dd << "-"
                 << "Apr"
                 << "-" << yyyy;
        }
        else if (mm == 5)
        {
            cout << "Output  : " << dd << "-"
                 << "May"
                 << "-" << yyyy;
        }
        else if (mm == 6)
        {
            cout << "Output  : " << dd << "-"
                 << "June"
                 << "-" << yyyy;
        }
        else if (mm == 7)
        {
            cout << "Output  : " << dd << "-"
                 << "July"
                 << "-" << yyyy;
        }
        else if (mm == 8)
        {
            cout << "Output  : " << dd << "-"
                 << "Aug"
                 << "-" << yyyy;
        }
        else if (mm == 9)
        {
            cout << "Output  : " << dd << "-"
                 << "Sep"
                 << "-" << yyyy;
        }
        else if (mm == 10)
        {
            cout << "Output  : " << dd << "-"
                 << "Oct"
                 << "-" << yyyy;
        }
        else if (mm == 11)
        {
            cout << "Output  : " << dd << "-"
                 << "Nov"
                 << "-" << yyyy;
        }
        else if (mm == 12)
        {
            cout << "Output  : " << dd << "-"
                 << "Dec"
                 << "-" << yyyy;
        }
    }
};
int main()
{
    int d, m, y;
    cout << "Enter a date : ";
    cin >> d;
    cout << "Enter a month: ";
    cin >> m;
    cout << "Enter a year : ";
    cin >> y;
    date d1(d, m, y); // creating instance
    d1.disp();
    getch();
    return (0);
}