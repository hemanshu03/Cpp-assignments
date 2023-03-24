#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int flag = 0, icountv = 0;

class person
{
    int pid;
    char pnm[20], nat[20], dob[20], doe[20], doexp[20], gender[20];

public:
    void accept(int);
    void show();
    void show(int);
};

std::string strikethrough(const std::string &text)
{
    std::string result;
    for (auto ch : text)
    {
        result.append(u8"\u0336");
        result.push_back(ch);
    }
    return result;
}

void st()
{
    cout << strikethrough("Human") << std::endl;
}

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
    cout << "Enter Date of birth (dd/mm/yyyy): ";
    cin >> dob;
    cout << "Enter Date of Issue (dd/mm/yyyy): ";
    cin >> doe;
    cout << "Enter Date of Expiry (dd/mm/yyyy): ";
    cin >> doexp;
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
void person::show()
{
    cout << "\nId: " << pid << "\nName: " << pnm << " \nNationality: " << nat << "\nGender: " << gender << "\nDOB: " << dob << "\nIssue date: " << doe << "\nExpiry date: " << doexp;
}
int main()
{
    person p[20];
    char validin[20];
    const char *valids = "Human";
    int i, n, id, dec, dec2, icount = 0;
    // system("CLS");
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
        system("CLS");
        exit(0);
    }
    if (dec < 1 || dec > 4)
    {
        icount++;
        if (icount > 4)
        {
            system("CLS");
            cout << "\n!!You have tried 5 wrong attempts!!";
            cout << "\nConfirm that you are not a Robot.";
            st();
            cout << "\nEnter the text displayed: ";
            cin >> validin[20];
            if (strcmp(validin, valids) == 0)
            {
                cout << "\nApproved";
            }
            else
            {
                cout << "\nTest failed. Please try again.";
            }
        }
        cout << "\nInvalid choice. Try again.";
        goto menu;
    }
    if (icount > 4)
    {
        system("CLS");
        cout << "\n!!You have tried 5 wrong attempts!!";
        cout << "\nConfirm that you are not a Robot.";
        st();
        cout << "\nEnter the text displayed: ";
        cin >> validin;
        if (strcmp(validin, valids) == 0)
        {
            cout << "\nApproved";
            icount = 0;
            goto menu;
        }
        else if (strcmp(validin, valids) != 0)
        {
            cout << "\nTest failed. Please try again.";
            exit(0);
        }
    }
}