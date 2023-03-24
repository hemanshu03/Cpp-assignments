#include <iostream>
using namespace std;

int main()
{
    cout.width(7);
    cout << 258 << 123;
    cout.width(10);
    cout.precision(3);
    cout << 2487.53348; // will give output as 2.49e+03 since it goes out of the default limit of the declared variable type
    int a = 5437;
    cout.width(10);
    cout.fill('@');
    cout << "\n"
         << a;
}
