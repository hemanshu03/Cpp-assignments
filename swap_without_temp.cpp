#include<iostream>

using namespace std;

int main()
{
    int a = 1222, b = 2333;

    cout << "\nBefore swapping a = " << a << " b = " << b;
    
    a = a^b^(b = a); //This method is done without temp variable using XOR method. 
                     //This method saves both, space as well as time and is important as of interview perspective.

    cout << "\nAfter swapping a = " << a << " b = " << b;

    return 0;
}