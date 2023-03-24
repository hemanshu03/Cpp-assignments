#include<iostream>
#include<string.h>
using namespace std;

class worker
{
    int noh, prt;
    float sal;
    string name;
    public:
        void accept(int wh, string nm, int pt = 1000)
        {
            noh = wh;
            prt = pt;
            name = nm;
        }
        void calculate()
        {
            sal = prt*noh;
        }
        void display()
        {
            cout << "\nWorker name: "<< name;
            cout << "\nNumber of hours worked: "<< noh <<" hrs";
            cout << "\nCalculated salary: "<< sal;
        }
};

int main()
{
    int nh, payrt;
    string wnm;
    worker w1, w2;
    cout << "\nEnter name of worker: ";
    cin >> wnm;
    cout << "\nEnter payrate: ";
    cin >> payrt;
    cout << "\nEnter number of hours worked: ";
    cin >> nh;
    w1.accept(nh,wnm, payrt);
    w2.accept(nh,wnm);
    w2.calculate();
    w1.calculate();
    cout << "\nUser defined argument: ";
    w1.display();
    cout << "\nDefault argument: ";
    w2.display();
}