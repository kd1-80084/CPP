// Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
// Mostly they do, but sometimes a car goes by without paying.
// The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
// collected. Model this tollbooth with a class called tollbooth.
// The two data items are a type unsigned int to hold the total number of cars, and a type double to
// hold the total amount of money collected.
// A constructor initializes all data members to 0. A member function called payingCar() increments
// the car total and adds 0.50 to the cash total. An other function, called nopayCar()
// increments the car total but adds nothing to the cash total. Finally, a member function called
// printOnConsole() displays the two totals and number of paying as well as non paying cars total.
// ( write a menu driven code for it)

#include <iostream>
using namespace std;

class tollbooth
{
private:
    int totalcar;
    double totalcash;

public:
    tollbooth() 
    {
        cout << "default parameter called" << endl;
        this->totalcar = 0;
        this->totalcash = 0;
    }

    int totalcar_increament()
    {
        return this->totalcar + 1;
    }

    double totalcash_increament()
    {
        return this->totalcash + 0.5;
    }

    void payingCar()
    {
        this->totalcar = totalcar_increament();
        this->totalcash = totalcash_increament();
    }

    void nonpayingCar()
    {
        this->totalcar = totalcar_increament();
    }

    void printOnConsole()
    {
        cout << "total paying car passed=" << 2 * this->totalcash << endl;
        cout << "total nonpaying car passed=" << this->totalcar - (2 * this->totalcash) << endl;
        cout << "totalcash recived=" << this->totalcash << endl;
    }
};

enum Emenu
{
    EXIT,
    PAYING_CAR_PASSED,
    NON_PAYING_CAR_PASSED,
    PRINT_TOTAL
};

Emenu menu()
{
    int choice;
    cout << "************************************************************" << endl;
    cout << "0.EXIT" << endl;
    cout << "1.PAYING_CAR_PASSED" << endl;
    cout << "2.NON_PAYING_CAR_PASSED" << endl;
    cout << "3.TOTAL_AMOUNT_COLLECTRD" << endl;
    cout << "ENTER_CHOICE" << endl;
    cin >> choice;
    cout << "************************************************************" << endl;
    return Emenu(choice);
}

int main()
{
    Emenu choice;
    tollbooth t1;

    while (choice= menu())
    {
        switch (choice)
        {
        case PAYING_CAR_PASSED:
            cout << "one_paying_car passed" << endl;
            t1.payingCar();
            break;

        case NON_PAYING_CAR_PASSED:
            cout << "one_nonpaying_car passed" << endl;
            t1.nonpayingCar();
            break;
        
        case PRINT_TOTAL:
            t1.printOnConsole();
            break;

        default:
            cout << "enter valid choice" << endl;
            break;
        }
    }
    
}
