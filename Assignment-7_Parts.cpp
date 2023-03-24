#include <conio.h>
#include <iostream>
#include <string.h>
using namespace std;
class part
{
    int pid;
    int price;
    char name[10];

public:
    part(int prtid, int prce, char nam[])
    {
        pid = prtid;
        price = prce;
        strcpy(name, nam);
    }
    part(part &ob1)
    {
        pid = ob1.pid;
        price = ob1.price;
        strcpy(name, ob1.name);
    }

    void display()
    {
        cout.precision(2);
        cout << "Part id: " << pid << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    int pid;
    int price;
    char name[10];
    system("CLS");
    cout << "\nEnter pid : ";
    cin >> pid;
    cout << "\nEnter price : ";
    cin >> price;
    cout << "\nEntr name : ";
    cin >> name;
    part ob(pid, price, name), ob1(ob);
    ob.display();
    cout << "\nAter copy constructor : \n ";
    ob1.display();
    getch();
}