// Q2. Write a class to store Account information of Bank customer by using following class diagram.
// Use enum to store information of account type. Create an array of 5 Accounts in main() and accept
// their details from user. Write Menu driven program to deposit/withdraw amount from the account.
// After each transaction display updated account balance. Provide appropriate getters/setters with
// necessary validations. Throw exceptions for invalid values. Also implement an exception class
// InsufficientFunds. In withdraw() member function, if sufficient balance is not available
// in account, throw this exception.

#include <iostream>
using namespace std;
#define size 2;

enum acc_type
{
    SAVING = 1,
    CURRENT,
    DEMAT
};

class insufficient_fund
{
private:
    int acc_id;
    double current_balance;
    double withdrawal_amount;

public:
    insufficient_fund(int acc_id, double current_balance, double withdrawal_amount)
    {
        this->acc_id = acc_id;
        this->current_balance = current_balance;
        this->withdrawal_amount = withdrawal_amount;
    }
    void display()
    {
        cout << "INSUFFICIENT BALANCE" << endl;
        cout << "ACC_ID=" << this->acc_id<< endl;
        cout << "CURRENT_BALANCE=" << this->current_balance<< endl;
        cout << "WITHDRAWAL_AMOUNT=" << this->withdrawal_amount<< endl;
    };
};
class Account
{
private:
    int acc_id;
    acc_type type;
    double balance;

public:
    Account()
    {
        this->acc_id = 0;
        // this->acc_type = " ";
        this->balance = 0;
    }
    Account(int acc_id, acc_type type)
    {
        this->acc_id = acc_id;
        this->type = acc_type(type);
    }
    void accpet()
    {
        cout << "**********************************" << endl;
        // cout << "enter account details:" << endl;
        cout << "select your account type=" << endl;
        cout << "1-FOR SAVING ACCOUNT" << endl;
        cout << "2-FOR CURRENT ACCOUNT" << endl;
        cout << "3-FOR DEMAT ACCOUNT" << endl;
        int temp;
        cin >> temp;
        this->type = acc_type(temp);
        cout << "**********************************" << endl;
        cout << "acc_id=";
        cin >> this->acc_id;
        cout << "balance=";
        cin >> this->balance;
    }
    void display()
    {
        cout << "ACCOUNT DETAILS:" << endl;
        cout << "ACC_ID:" << this->acc_id << endl;
        cout << "ACC_TYPE:";
        if (this->type == 1)
            cout << "SAVING ACCOUNT" << endl;
        if (this->type == 2)
            cout << "CURRENT ACCOUNT" << endl;
        if (this->type == 3)
            cout << "DEMAT ACCOUNT" << endl;
        cout << "BALANCE:" << this->balance<<endl;
    }
    void setid(int acc_id)
    {
        this->acc_id = acc_id;
    }
    int getacc_id()
    {
        return this->acc_id;
    }
    acc_type getacc_type()
    {
        return this->type;
    }
    double getbalance()
    {
        return this->balance;
    }

    void deposite(double amount)
    {
        this->balance = this->balance + amount;
        cout << "your available balance is: $" << this->balance;
    }

    void withdrawal(double amount)
    {
        if (amount > this->balance)
            throw insufficient_fund(acc_id, balance, amount);
        else
            this->balance = this->balance - amount;
        cout << "withdrawal is successful" << endl;
        cout << "your available balance is: $" << this->balance;
    }
    void setbalance(double balance)
    {
        this->balance = balance;
    }
};

int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. ADD ACCOUNT" << endl;
    cout << "2. DEPOSITE MONEY" << endl;
    cout << "3. WITHDRAWAL MONEY" << endl;
    cout << "4. DISPLAY ACCOUNT DETAILS" << endl;
    cout << "5. CHANGE ACCOUNT DETAILS" << endl;
    cout << "6. DISPLAY ALL" << endl;

    cout << "ENTER  CHOICE= " << endl;
    cin >> choice;
    return choice;
}

int main()
{
    Account a1[2];
    int choice;
    double amount;
    int index = 0;
    while ((choice = menu()) != 0)
    {
        int id = 0;
        switch (choice)
        {
        case 1:
        {

            if (index < 2)
            {

                for (int i = 0; i < 2; i++)
                {
                    a1[i].accpet();
                    index++;
                }
            }
            else
                cout << "you have cross the account creating limit";
            break;
        }

        case 2:
            cout << "ENTER ACCOUNT ID:";
            cin >> id;
            for (int i = 0; i < 2; i++)
            {
                if (a1[i].getacc_id() == id)
                {
                    cout << "ENTER AMOUNT:";
                    cin >> amount;
                    a1[i].deposite(amount);
                }
            }
            break;

        case 3:
            cout << "ENTER ACCOUNT ID:";
            cin >> id;
            for (int i = 0; i < 2; i++)
            {
                if (a1[i].getacc_id() == id)
                {
                    cout << "ENTER AMOUNT:";
                    cin >> amount;
                    try
                    {
                        a1[i].withdrawal(amount);
                    }
                    catch (insufficient_fund f1)
                    {
                        f1.display();
                    }
                }
            }
            break;

        case 4:
            cout << "ENTER ACCOUNT ID:";
            cin >> id;
            for (int i = 0; i < 2; i++)
            {
                if (a1[i].getacc_id() == id)
                {
                    a1[i].display();
                }
            }
            break;
        case 5:
            cout << "ENTER ACCOUNT ID:";
            cin >> id;
            for (int i = 0; i < 2; i++)
            {
                if (a1[i].getacc_id() == id)
                {
                    a1[i].accpet();
                }
            }
            break;
        case 6:
            for (int i = 0; i < 2; i++)
            {
                a1[i].display();
            }

            break;
        default:
            break;
        }
    }
}