#include <iostream>

using namespace std;

int main()
{
    int deposit;
    int choice;
    cout <<"*************************************************************"<<endl;
    cout << "********************WELCOME TO AKIA BANK********************"<<endl;
    cout <<"*************************************************************"<<endl;
    cout<<"Enter 1 To Enter Your Pin"<<endl;
    cout<<"Enter 2 To Deposit"<<endl;
    cout<<"Enter 3 To Widthdraw"<<endl;
    cout<<"Enter 4 To Check Balance"<<endl;
    cout<<"Enter 5 To Report Stolen Card"<<endl;
    cin>>choice;
    switch(choice)

    {
        const string correct_pin = "2121";
        string user_pin;

        while (true) {
            cout<<"Enter your PIN: ";
            cin>> user_pin;

            if (user_pin == correct_pin) {
                cout << "Correct PIN. Access Granted: ";
                break;    }

            else {
                cout<<"Incorrect PIN. Please Try Again: ";
            }
        }

        return 0;
    }
}
