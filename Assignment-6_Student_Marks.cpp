#include <conio.h>
#include <iostream>
using namespace std;

class stu
{
public:
    int rno;
    float perc;
    char name[10]; // name=student name , rno= roll no
    void accept()
    {
        cout << "Enter Roll no: ";
        cin >> rno;
        cout << "\nEnter student name: ";
        cin >> name;
    }
};
class ac : public stu // inherit class  ac
{
protected:
    int m1, m2, m3;

public:
    void acc()
    {
        cout << "\nEnter marks in 1 subject: ";
        cin >> m1;
        cout << "Enter marks in 2 subject: ";
        cin >> m2;
        cout << "Enter marks in 3 subject: ";
        cin >> m3;
    }
};
class ec : public ac // inherit class ec
{
protected:
    int m4;

public:
    void acce()
    {
        cout << "Enter extra curricular activities: ";
        cin >> m4;
    }
};
class result : public ec // inherit class result
{
public:
    int m;
    void cal()
    {
        m = m1 + m2 + m3 + m4; // calculating marks
        perc = (((float(m))/400)*100);
        cout << "Total Marks: " << m << " /" << " 400" << "\n"
             << "Precentage : " << perc << " %" << endl
             << "Grade      : ";
        if (m > 75)
            cout << "A grade" << endl;
        else if (m > 65)
            cout << "B grade" << endl;
        else if (m > 45)
            cout << "C grade" << endl;
        else if (m > 35)
            cout << "Pass" << endl;
        else if (m > 0)
            cout << "Fail" << endl;
    }
};
int main()
{
    int ch;
    result s1;
    cout << endl;
    do
    {
    lb2:
        cout << "\n\n**Menu of operations**";
        cout << "\nPress and hit enter to\n1. Build a report\n2. Calculate marks and appoint a grade\n3. Exit\n";
        cout << "\nDecision: ";
        cin >> ch;
        cout << endl;
        switch (ch)
        {

        case 1:
            s1.accept();
            s1.acc();
            s1.acce();
            break;
        case 2:
            s1.cal();
            break;
        }

    } while (ch != 3);
}