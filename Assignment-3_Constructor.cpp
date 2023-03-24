#include <iostream>
#include <conio.h>
using namespace std;

class sample
{
    int n1, n2, in1, in2;

public:
    sample()
    {
        n1 = 10;
        n2 = 20;
    }
    sample(int a, int b)
    {
        n1 = a;
        n2 = b;
    }
    sample(int a, long int b = 50)
    {
        n1 = a;
        n2 = b;
    }
    void show()
    {
        if (n1 > n2)
            cout << "\nMaximum = " << n1; 
        else
            cout << "\nMaximum = " << n2;
    }
};
int main()
{
    system("CLS");
    int in1, in2;
    cout << "\nEnter two numbers: ";
    cin >> in1 >> in2;
    cout << "\nFor Default constructor : ";
    sample s;
    s.show();
    cout << "\nFor parameterizd constructor : ";
    sample s1(in1, in2);
    s1.show();
    cout << "\nFor Default constructor : ";
    sample s2(in1);
    s2.show();
    getch();
}
