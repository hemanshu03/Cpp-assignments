#include <iostream>
#include <conio.h>
#include <D:\Programming\C++ Programs\Tuition\Headerfiles\captcha.h>
using namespace std;

int flag = 0;

class person
{
    int pid, dobd, dobm, doby, doed, doem, doey, doid, doim, doiy;
    char pnm[20], nat[20], gender[20];

public:
    void accept(int);
    void show();
    void show(int);
    int validate(int, int, int);
};
void person::accept(int cnt)
{
    cout << "\n-----------------------------For Person " << cnt << "-----------------------------";
    cout << "\nEnter Person Id: ";
    cin >> pid;
    cout << "Enter Person Name: ";
    cin >> pnm;
    cout << "Enter Nationality: ";
    cin >> nat;
    cout << "Enter gender: ";
    cin >> gender;
    cout << "Enter Date of birth (dd/mm/yyy)(HIT ENTER AFTER EVERY PARAMETER): ";
    cin >> dobd >> dobm >> doby;
    validate(dobd, dobm, doby);
    cout << "Enter Date of Issue (dd/mm/yyyy)(HIT ENTER AFTER EVERY PARAMETER): ";
    cin >> doid >> doim >> doiy;
    validate(doid, doim, doiy);
    cout << "Enter Date of Expiry (dd/mm/yyyy)(HIT ENTER AFTER EVERY PARAMETER): ";
    cin >> doed >> doem >> doey;
    validate(doed, doem, doey);
}
void person::show(int id)
{
    flag = 0;
    if (id == pid)
    {
        flag = 1;
        show();
    }
    if (id != pid)
    {
        flag = 0;
        cout << "\nID not found. Please enter ID again or try later.\n";
    }
}

int person::validate(int d, int m, int y)
{
    if (y % 4 == 0)
    {
        if(m == 1 || 3 || 5 || 7, 8 || 10 || 12)
        {
            if(d > 0 && d < 32)
                return 0;

            else    
                cout << "\nInvalid date entered.\nProgram will now exit.";
                exit(0);
        }
        if(m == 2)
        {
            if(d > 0 && d < 30)
                return 0;

            else    
                cout << "\nInvalid date entered.\nProgram will now exit.";
                exit(0);
        }
        else
        {
            if(d > 0 && d < 31)
                return 0;

            else    
                cout << "\nInvalid date entered.\nProgram will now exit.";
                exit(0);
        }
    }
    else
    {
        if(m == 1 || 3 || 5 || 7, 8 || 10 || 12)
        {
            if(d > 0 && d < 32)
                return 0;

            else    
                cout << "\nInvalid date entered.\nProgram will now exit.";
                exit(0);
        }
        if(m == 2)
        {
            if(d > 0 && d < 29)
                return 0;

            else    
                cout << "\nInvalid date entered.\nProgram will now exit.";
                exit(0);
        }
        else
        {
            if(d > 0 && d < 31)
                return 0;

            else    
                cout << "\nInvalid date entered.\nProgram will now exit.";
                exit(0);
        }
    }
}

void person::show()
{
    cout << "\nId: " << pid << "\nName: " << pnm << " \nNationality: " << nat << "\nGender: " << gender << "\nDOB: " << dobd << "/" << dobm << "/" << doby << "\nIssue date: " << doid << "/" << doim << "/" << doiy << "\nExpiry date: " << doed << "/" << doem << "/" << doey;
}
int main()
{
    person p[20];
    int i, n, id, dec, dec2;
    int humcnt = 0;
    system("CLS");
menu:
    cout << "\nPress and hit enter to:\n1. Accept\n2. Display with PID\n3. Show info of all persons\n4. Exit\nDecision: ";
    cin >> dec;
    switch (dec)
    {
    case 1:
        cout << "\nHow many records u want?: ";
        cin >> n;
        for (i = 0; i < n; i++)
        {
            p[i].accept(i + 1);
        }
        cout << "\nPress any key to continue";
        getch();
        system("CLS");
        goto menu;
        break;
    idagain:
    case 2:
        cout << "\nEnter Pid for search : ";
        cin >> id;
        for (i = 0; i < n; i++)
        {
            p[i].show(id);
        }
        if (flag == 1)
        {
            cout << "\nPress any key to continue";
        }
        if (flag == 0)
        {
        menu2:
            cout << "\nDo you want to:\n1. Enter again\n2.Try again later\nDecision: ";
            cin >> dec2;
            if (dec2 == 1)
            {
                goto idagain;
            }
            if (dec2 == 2)
            {
                system("CLS");
                goto menu;
            }
            if (dec2 < 1 || dec2 > 2)
            {
                system("CLS");
                cout << "\nInvalid choice. Try again.";
                goto menu2;
            }
        }
        getch();
        system("CLS");
        goto menu;
        break;
    case 3:
        cout << "\n All person Info.....";
        for (i = 0; i < n; i++)
        {
            cout << "\n-----------------------------Person " << i + 1 << "-----------------------------";
            p[i].show();
        }
        cout << "\nPress any key to continue";
        getch();
        system("CLS");
        goto menu;
        break;
    case 4:
        cout << "\nExiting";
        animation();
        cout << "\nClearing Screen";
        animation();
        system("CLS");
        exit(0);
    }
    if (dec < 1 || dec > 4)
    {
        system("CLS");
        cout << "\nInvalid choice. Try again.";
        humcnt++;
        cout << "\n\nCounter= " << humcnt << "\n";
        if (humcnt > 3)
        {
            system("CLS");
            cout << "\n!!You have tried 5 wrong attempts!!";
            cout << "\nConfirm that you are not a Robot.";
            cout << "\nEnter the text displayed: ";
            recaptchaveri();
            humcnt = 0;
        }
        goto menu;
    }
}