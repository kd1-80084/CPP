#include <iostream>
using namespace std;

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
    int getday()
    {
        return this->day;
    }
    void setday(int day)
    {
        this->day = day;
    }
    int getmonth()
    {
        return this->month;
    }
    void setmonth(int month)
    {
        this->month = month;
    }
    int getyear()
    {
        return this->year;
    }
    void setyear(int year)
    {
        this->year = year;
    }
    void accept()
    {
        cout << "enter day=" ;
        cin >> this->day;
        cout << "enter month=";
        cin >> this->month;
        cout << "enter year=";
        cin >> this->year;
    }
    void display()
    {
        cout << "date=" << this->day << "/" << this->month << "/" << this->year<<endl;
    }
    bool IsLeapYear()
    {
        if ((this->getyear())% 4==0 ||(this->getyear())%400==0 )
            return true;
        else
            return false;
    }
};

class Person
{
private:
    string name;
    string address;
    Date dob;   // association->composition

public:
    Person()
    {
        cout<<"person::constructor"<<endl;
        this->name = " ";
        this->address = " ";
    }
    Person(string name, string address, int day, int month, int year) 
    {
        cout<<"person::para::constructor"<<endl;
        this->name = name;
        this->address = address;
        this->dob.setday(day);  
        this->dob.setmonth(month);
        this->dob.setyear(year);
    }
    // Person(string name, string address, int day, int month, int year) :dob(day, month, year)
    // {
    //     this->name = name;
    //     this->address = address;
    // }
    string getname()
    {
        return this->name;
    }
    void setname(string name)
    {
        this->name = name;
    }
    void getaddress()
    {
        this->address;
    }
    void setaddress(string address)
    {
        this->address = address;
    }
    Date getbirthday()
    {
        return this->dob;
    }
    void setbirthday()
    {
        this->dob=dob;
    }
    virtual void accept()
    {
        cout << "enter name=";
        cin >> this->name;
        cout << "enter address=";
        cin >> this->address;
        cout << "enter date of birth:"<<endl;
        dob.accept();
    }
    virtual void display()
    {
        cout << "name=" << this->name << endl;
        cout << "address=" << this->address << endl;
        cout << "birth ";
        dob.display();
    }

};

class Employee : public Person
{
private:
    int id;
    float salary;
    string dept;
    Date doj; // association->composition
public:
    Employee()
    {
        cout<<"emp::constructor"<<endl;
        this->id = 0;
        this->salary = 0;
        string dept = "";
    }
    Employee(int id, int salary, string dept, int dd, int mm, int yy, string name, string address, int day,int month,int year): doj(dd, mm, yy),Person(name,address,day,month,year)
    {
        cout<<"emp::para::constructor"<<endl;
        this->id = id;
        this->salary = salary;
        this->dept = dept;
         
    }
    int getid()
    {
        return this->id;
    }
    void setid(int id)
    {
        this->id=id;
    }
    float getsalary()
    {
        return this->salary;
    }
    void setsalary(float salary)
    {
        this->salary=salary;
    }
    string getdept()
    {
        return this->dept;
    }
    void setdept(string dept)
    {
        this->dept=dept;
    }

    void accept()
    {
        cout << "enter id=";
        cin >> this->id;
        cout << "enter salary=";
        cin >> this->salary;
        cout << "enter dept=";
        cin >> this->dept;
        cout<<"joining details:"<<endl;
        doj.accept();
        Person::accept();
    }
    void display()
    {
        cout << "id=" << this->id << endl;
        cout << "salary=" << this->salary << endl;
        cout << "dept=" << this->dept << endl;
        cout << "joining ";
        doj.display();
        Person::display();
    }
};
int main()
{
    Employee e1;
    e1.accept();
    e1.display();

    // Employee e2(4587,5000,"civil",29,10,2023,"krishna","nanded",19,8,1998);
    // e2.display();
    return 0;
}







