#include <iostream>
using namespace std;

// dependancy class
class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void acceptDate()
    {
        cout << "enter date=";
        cin >> this->day;
        cout << "enter month=";
        cin >> this->month;
        cout << "enter year=";
        cin >> this->year;
    }
    void displaytDate()
    {
        cout << "date=" << this->day << ":" << this->month << ":" << this->year << endl;
    }
    // int getday()
    // {
    //     return this->day;
    // }
    // int getmonth()
    // {
    //     return this->month;
    // }
    // int getyear()
    // {
    //     return this->year;
    // }
    void setday(int day)
    {
        this->day = day;
    }
    void setmonth(int month)
    {
        this->month = month;
    }
    void setyear(int year)
    {
        this->year = year;
    }
};

// dependent class
// person has-a date of birth
class Person
{
private:
    string name;
    string address;
    Date dob; // association->composition
public:
    Person()
    {
        this->name = "";
        this->address = "";
    }
    Person(string name, string address, int day, int month, int year)
    {
        cout << "inside 1st consturctor" << endl;
        this->name = name;
        this->address = address;
        this->dob.setday(day);
        this->dob.setmonth(month);
        this->dob.setyear(year);
    }
    // Person(string name, string address, int day, int month, int year) : dob(day, month, year)
    // {
    //     cout<<"inside 2st consturctor"<<endl;
    //     this->name = name;
    //     this->address = address;
    // }
    void acceptPersonDetail()
    {
        cout << "enter name=";
        cin >> this->name;
        cout << "enter address=";
        cin >> this->address;
        cout << "enter date of birth:" << endl;
        dob.acceptDate();
    }
    void displayPersonDetail()
    {
        cout << "name=" << this->name << endl;
        cout << "address=" << this->address << endl;
        cout << "birth ";
        dob.displaytDate();
    }
};

// depentant class
// employee has-a date of joining
class Employee
{
private:
    int id;
    float salary;
    string dept;
    Date doj; // association->composition
public:
    Employee()
    {
        this->id = 0;
        this->salary = 0;
        string dept = "";
    }
    Employee(int id, int salary, string dept, int dd, int mm, int yy) //: doj(dd, mm, yy)
    {
        this->id = id;
        this->salary = salary;
        this->dept = dept;
        this->doj.setday(dd);   // doj.setday(dd);
        this->doj.setmonth(mm); // doj.setmonth(mm);
        this->doj.setyear(yy);  // doj.setyear(yy);
    }
    // or//
    //  Employee(int id, int salary, string dept, int dd, int mm, int yy) :doj(dd, mm, yy)
    //  {
    //      this->id = id;
    //      this->salary = salary;
    //      this->dept = dept;
    //  }
    void acceptEmployee()
    {
        cout << "enter id=";
        cin >> this->id;
        cout << "enter salary=";
        cin >> this->salary;
        cout << "enter dept=";
        cin >> this->dept;
        doj.acceptDate();
    }
    void dispalyEmployee()
    {
        cout << "id=" << this->id << endl;
        cout << "salary=" << this->salary << endl;
        cout << "dept=" << this->dept << endl;
        cout << "joining ";
        doj.displaytDate();
    }
};
int main()
{
    // Employee p1(100,10000,"CSE", 1, 1, 2010);
    // p1.dispalyEmployee();

    Person p2("KRISHNA", "NANDED", 1, 1, 2010);
    p2.displayPersonDetail();
    return 0;
}
