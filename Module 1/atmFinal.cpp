#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int N = 0;

void menu()
{
    cout << "************** Main Menu *************" << endl;
    cout << "1.Open New Account" << endl;
    cout << "2.Close Old Account" << endl;
    cout << "3.Deposit Money" << endl;
    cout << "4.Withdraw Money" << endl;
    cout << "5.Check Balance" << endl;
    cout << "6.Exit" << endl;
    cout << "           Enter your option (1-6)" << endl;
}
class Account
{
    string name;
    int age;
    float Balance;
    long long acountNumber;
    string pin;

public:
    void OpenAc(string nm, int ag, float bl, long long ac, string pass)
    {
        name = nm;
        age = ag;
        Balance = bl;
        acountNumber = ac;
        pin = pass;
    }
    long long getAc()
    {
        return acountNumber;
    }
    void getInformation()
    {
        cout << endl;
        cout << endl;

        cout << "*******************************************" << endl;
        cout << "                     Account Holder : " << name << endl;
        cout << "                     AC No. " << acountNumber << endl;
        cout << "                     Bal : " << Balance << endl;

        cout << "*******************************************" << endl;
        cout << endl;
    }
    void depositeAmmount(float bal)
    {
        Balance += bal;
    }
    void withdrawAmount(float bal)
    {
        Balance -= bal;
    }
    float getAmount()
    {
        return Balance;
    }
    string getPin()
    {
        return pin;
    }
};
Account ac[1000];
int searchAc(long long acc)
{
    int index = -1;
    for (int i = 0; i < N; i++)
    {
        if (ac[i].getAc() == acc)
            return i;
    }
    return -1;
}
void openAccount()
{
    string nm;
    int age;
    float balance;
    long long acNo;
    string pass = "";
    cout << "Enter Name :___" << endl;
    cin.ignore();
    getline(cin, nm);
    // cin >> nm;
    cout << "Enter Age :___" << endl;
    cin >> age;
    while (age <= 10)
    {
        cout << "Age is not valid . Enter valid age !!!" << endl;
        cout << "Re Enter Age: ____\n";
        cin >> age;
    }
    cout << "Enter Deposit Amount :___ " << endl;

    cin >> balance;
    while (balance < 500)
    {
        cout << "\n\tDeposited balance cannot be less than 500/-\n\n";
        cout << "\n\tRe enter balance : ____\n";
        cin >> balance;
    }
    cout << "Enter Account Number :___" << endl;
    cin >> acNo;
    while (pass.size() < 4)
    {
        cout << "Enter Password :___" << endl;
        char ch = _getch();
        while (ch != 13)
        {
            pass.push_back(ch);
            cout << "*";
            ch = _getch();
        }
        if (pass.size() < 4)
        {
            pass = "";
            cout << "\t\tPassword length cannot be less than 4 \n";
        }
    }

    //  cin >> pass;
    ac[N].OpenAc(nm, age, balance, acNo, pass);
    cout << "SUCCESSFULLY OPENED AN ACCOUNT WITH AC No. " << acNo << endl;
    cout << "\n\n";
}
float DepositAccount()
{
    float bal;
    cout << "          ENTER AMMOUNT TO BE DEPOSITED" << endl;
    cin >> bal;
    return bal;
}
float withdrawMoney()
{
    float bal;
    //  long int ac;
    //  cout << "Enter account Number " << endl;
    //   cin >> ac;
    cout << "          ENTER AMMOUNT TO BE WITHDRAWED " << endl;
    cin >> bal;
    return bal;
}
void showingError()
{
    cout << "\n\n"
         << endl;

    cout << "              INVALID ACCOUNT NUMBER" << endl;
    cout << "              PLEASE GIVE A VALID ACCOUNT" << endl;

    cout << "\n"
         << endl;
}
void closeAccount(int index)
{
    long long acNO = ac[index].getAc();
    for (int i = index; i < N; i++)
    {
        ac[i] = ac[i + 1];
    }
    cout << "\n\n\t\tSUCCESSFULLY CLOSED ACCOUNT WITH AC NO. " << acNO << endl;
}
string inputPass()
{
    string pass = "";
    char ch = _getch();
    while (ch != 13)
    {
        pass.push_back(ch);
        cout << "*";
        ch = _getch();
    }
    return pass;
}
int main()
{

    while (1)
    {

        menu();
        int n;
        int index;
        cin >> n;
        long acNo;
        if (n != 6)
        {
            if (n == 1)
            {
                openAccount();
                N++;
                // return 0;
            }
            else if (n >= 2 && n <= 5)
            {
                long int acNo;
                cout << "             ENTER ACCOUNT NUMBER         " << endl;
                cin >> acNo;
                int index = searchAc(acNo);
                if (index < 0)
                {
                    // system("Color 04");
                    showingError();

                    continue;
                }
                else
                {
                    string password;
                    cout << "          ENTER YOUR PIN            " << endl;
                    password = inputPass();
                    if (password != ac[index].getPin())
                    {
                        cout << endl;
                        cout << endl;
                        cout << "YOUR PIN DIDNOT MATCH . PLEASE PROVIDE RIGHT INFORMATION " << endl;
                        cout << endl;
                        continue;
                    }
                }
                if (n == 3)
                {
                    float bal = DepositAccount();
                    if (bal <= 0)
                    {
                        cout << "\n\tYou cannot deposit negative money!!!!!!!!!\n\n";
                    }
                    else
                    {
                        ac[index].depositeAmmount(bal);
                        cout << "             Successfully Deposited Amount of " << bal << endl;
                    }
                }
                else if (n == 2)
                {
                    closeAccount(index);
                }
                else if (n == 4)
                {

                    float bal = withdrawMoney();

                    float currBal = ac[index].getAmount();
                    if (bal <= 0)
                    {
                        cout << "\n\tYou cannot withdraw negative money!!!!!!!!!\n\n";
                    }
                    else
                    {
                        if (bal > currBal)
                        {
                            cout << endl;
                            cout << "         SORRY   !!!! You cannot withdraw more than your current balance" << endl;
                            cout << endl;
                        }
                        else
                        {
                            ac[index].withdrawAmount(bal);
                            cout << "Successful withdrawal of  amount  " << bal << endl;
                        }
                    }
                }
                else if (n == 5)
                {
                    ac[index].getInformation();
                }
            }
            else
            {
                cout << "Account Number :" << endl;
                cin >> acNo;
            }
        }
        else
        {
            cout << "\n\n\n";
            cout << "       ********** THANKS FOR BEING WITH US *********" << endl;
            return 0;
        }
    }

    return 0;
}