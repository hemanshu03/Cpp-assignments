//wap to create a class complex which has members real, imaginary
//accept and display compex numbers and calculate addition, subtraction and multiplication
#include<iostream>
using namespace std;

class complex
{
    double real=0, imag=0;
    public: 
        void accept()
        {   
            cout<<"\nEnter the real part: ";
            cin>>real;
            cout<<"Enter the imaginary part: ";
            cin>>imag;
        }
        void display()
        {
            cout<<"\n"<<real<<" +("<<imag<<"i)";
        }
        void addition(complex c1, complex c2)
        {
            real=c1.real+c2.real;
            imag=c1.imag+c2.imag;
            cout<<"\nThe sum is: ";
        }
        void subtraction(complex c1, complex c2)
        {
            real=c1.real-c2.real;
            imag=c1.imag-c2.imag;
            cout<<"\nThe difference is: ";
        }
        void multiply(complex c1, complex c2)
        {
            real=((c1.real*c2.real)-(c1.imag*c2.imag));
            imag=((c1.real*c2.imag)+(c1.imag*c2.real));
            cout<<"\nThe product is: ";
        }
        void divide(complex c1, complex c2)
        {
            real=(((c1.real*c2.real)-(c1.imag*c2.imag))/(((c2.real)*(c2.real))+((c2.imag)*(c2.imag))));
            imag=(((c1.real*c2.imag)+(c1.imag*c2.real))/(((c2.real)*(c2.real))+((c2.imag)*(c2.imag))));
            cout<<"\nThe division is: ";
        }
};

int main()
{
    int dec;
    complex c1,c2,c3;
    lb:cout<<"\nFor 1st complex number: ";
    c1.accept();
    cout<<"\nFor 2nd complex number: ";
    c2.accept();
    cout<<"\nThe entered numbers are: ";
    c1.display();cout<<" and ";c2.display();
    lb2:cout<<"\n\n**Menu of operations**";
    cout<<"\nPress and hit enter to\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Re-enter the values\n6. Do all four functions\n7. Exit program";
    cout<<"\nDecision: ";
    cin>>dec;
    if(dec>0 && dec<8){
    switch(dec){
        do{
        case 1:
            c3.addition(c1,c2);
            c3.display();
            goto lb2;
        case 2:
            c3.subtraction(c1,c2);
            c3.display();
            goto lb2;
        case 3:
            c3.multiply(c1,c2);
            c3.display();
            goto lb2;
        case 4:
            c3.divide(c1,c2);
            c3.display();
            goto lb2;
        case 5:
            fflush(stdin);
            goto lb;
        case 6:
            c3.addition(c1,c2);
            c3.display();
            c3.subtraction(c1,c2);
            c3.display();
            c3.multiply(c1,c2);
            c3.display();
            c3.divide(c1,c2);
            c3.display();
            goto lb2;
        case 7:
            cout<<"\n";
            system("pause");
            system("CLS");
            exit(0);
        }while(dec>0 && dec<8);
    }
    }
    if(dec<0 || dec>7){
        cout<<"\nInvalid input. Try again.";
        goto lb2;
    }
}