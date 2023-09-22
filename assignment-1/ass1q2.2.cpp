// Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
// Date is having data members day, month, year. Implement the following functions.
// void initDate();
// void printDateOnConsole();
// void acceptDateFromConsole();
// bool isLeapYear();

#include <iostream>
using namespace std;


//class using cpp
class Date
{
private:
    int day;
    int month;
    int year;

public:
    void initDate()
    {
        this->year = 1900;
        this->month = 01;
        this->day = 01;
    }

    void acceptDateFromConsole()
    {
        cout << "enter the year=\n"
             << endl;
        cin >> this->year;
        cout << "enter the month=\n"
             << endl;
        cin >> this->month;
        cout << "enter the day=\n"
             << endl;
        cin >> this->day;
    }

    void printDateOnConsole()
    {
        cout << "enter the day=\n"
             << this->year << ':' << this->month << ':' << this->day << endl;
    }

    bool isLeapYear()
    {
        if(this-> year % 4 == 0 || this-> year % 400 == 0)
        {
            cout<< "this is leap year" << endl;
            return true;
            
        }
        else  
        {
            cout<< "this is notleap year" << endl;
            return false ;
        }
            
    }

};

int main()
{
    struct Date d1;
    int x;
    do
    {
        cout << "\n select any choice" << endl;
        cout << "\n 1.for initalisation   \n 2. for accept from user \n 3.check fro leap year \n 4.exit "
             << endl;
        cin >> x;

        switch (x)
        {
        case 1:

            d1.initDate();
            d1.printDateOnConsole();
            break;

        case 2:
            d1.acceptDateFromConsole();
            d1.printDateOnConsole();
            break;

        case 3:
            d1.acceptDateFromConsole();
            d1.isLeapYear();
            break;

        case 4:
            break;

        default:
            cout << "enter valid choice" << endl;
            break;
        };

    } while (x != 4);

    return 0;
}
