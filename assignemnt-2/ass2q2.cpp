// Q2. Write a class Address. Implement constructors, getters, setters, accept(), and display() methods.
// Instead of char[] use string datatype

#include <iostream>
using namespace std;

class Address
{
private:
    string building;
    string street;
    string city;
    int pin;

public:
    Address()
    {
        building = "sunbeam";
        street = "shaniwar peth";
        city = "karad";
        pin = 411048;
    }

    Address(string building, string steet, string city, int pin)
    {
        this->building = building;
        this->street = street;
        this->city = city;
        this->pin = pin;
    }

    string getbuilding()
    {
        return this->building;
    }

    string getstreet()
    {
        return this->street;
    }

    string getcity()
    {
        return this->city;
    }

    int getpin()
    {
        return this->pin;
    }

    void setbuilding(string building)
    {
        this->building = building;
    }

    void setstreet(string street)
    {
        this->street = street;
    }

    void setcity(string city)
    {
        this->street = street;
    }

    void setpin(int pin)
    {
        this->pin = pin;
    }

    void acceptaddress()
    {
        cout << "enter detail address \n"
             << endl;
        cin >> building >> street >> city >> pin;
    }

    void displayaddress()
    {
        cout << "detail address \n"
             << endl;
        cout << building << "," << street << "," << city << "," << pin << endl;
    }
};

int main()
{
    class Address a1;
    a1.acceptaddress();
    a1.displayaddress();

    return 0;
}