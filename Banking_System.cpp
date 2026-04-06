#include<iostream>
#include<conio.h>
using namespace std;

class BankAccount {
private:
    string accountholdername;
    string accountnumber;
    int balance;

public:
    BankAccount(string name, string accnumber, int initialbalance) 
	{
        accountholdername = name;
        accountnumber = accnumber;
        balance = initialbalance;
        cout << "Account created!";
        cout << "\nAccount holder Name: " << accountholdername;
        cout << "\nAccount Number (VU): " << accountnumber;
        cout << "\nInitial balance: " << balance;
    }

    void deposit(int amount) 
	{
        balance += amount;
        cout << "\n\nDepositing amount: " << amount;
        cout << "\nBalance after Deposit: " << balance;
    }

    void withdraw(int amount) 
	{
        cout << "\n\nWithdrawing amount: " << amount;
        if (amount <= balance) 
		{
            balance -= amount;
            cout << "\nBalance after withdraw: " << balance;
        } else {
            cout << "\nInsufficient Balance!";
        }
    }

    void displaydetails() 
	{
        cout << "\n\n.......Account Summary.......";
        cout << "\nAccount Holder: " << accountholdername;
        cout << "\nAccount Number: " << accountnumber;
        cout << "\nCurrent Balance: " << balance;
    }
};

int main() 
{ 
    string name = "Rana Muhammad Younus Saleem";
    string vuid = "BC000000000";
    int initialbalance = 10000;
    int depositamount = 4884;   
    int withdrawamount = 2404;  

    BankAccount account(name, vuid, initialbalance);

    account.deposit(depositamount);

   
    account.withdraw(withdrawamount); 

    account.displaydetails();

    getch();
    return 0;
}

