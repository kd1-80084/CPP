#include <iostream>
using namespace std;
// parent class (or) base class
class Employee
{
private:
    int id;
    float salary;
    string designation; // designation
public:
    Employee()
    {
        cout << "employee::constructor" << endl;
        this->id = 0;
        this->salary = 0;
        this->designation = " ";
    }
    Employee(int id, float salary, string designation)
    {
        cout << "employee::para::constructor" << endl;
        this->id = id;
        this->salary = salary;
        this->designation = designation;
    }
    int getid()
    {
        return this->id = id;
    }
    float getsalary()
    {
        return this->salary = salary;
    }
    string getdesi()
    {
        return this->designation = designation;
    }

    void setid(int id)
    {
        this->id = id;
    }
    void setsalary(float salary)
    {
        this->salary = salary;
    }
    void setdesi(string designation)
    {
        this->designation = designation;
    }

    virtual void accept() = 0;
    virtual void display() = 0;
};
// child class (or) derived class
class Manager : virtual public Employee // virtual
{
private:
    float bonus;

protected:
    void accept_manager()
    {
        cout << "enter bonus=";
        cin >> bonus;
    }
    void display_manager()
    {
        cout << "bonus=" << this->bonus << endl;
    }

public:
    Manager()
    {
        cout << "manager::constructor" << endl;
        this->bonus = 0;
    }
    Manager(int id, float salary, string designation, float bonus)
    {
        cout << "manager::para::constructor" << endl;
        this->setid(id);
        this->setsalary(salary);
        this->setdesi(designation);
        this->bonus = bonus;
    }
    float getbonus()
    {
        return this->bonus;
    }
    void setbonus(float bonus)
    {
        this->bonus = bonus;
    }
    void accept()
    {
        int id;
        float salary;
        string designation;
        cout << "enter id=";
        cin >> id;
        setid(id);
        cout << "enter salary=";
        cin >> salary;
        setsalary(salary);
        cout << "enter designation=";
        cin >> designation;
        setdesi(designation);
        accept_manager();
    }
    void display()
    {
        cout << "id=" << this->getid() << endl;
        cout << "salary=" << this->getsalary() << endl;
        cout << "designation=" << this->getdesi() << endl;
        display_manager();
    }
};
// child class (or) derived class
class Salesman : virtual public Employee // virtual
{
private:
    float comm;

protected:
    void accept_salesman()
    {
        cout << "enter comm=";
        cin >> comm;
    }
    void display_Salesman()
    {
        cout << "comm=" << this->comm << endl;
    }

public:
    Salesman()
    {
        cout << "salesman::constucctor" << endl;
        this->comm = 0;
    }
    Salesman(int id, float salary, float comm)
    {
        cout << "salesman::para::constucctor" << endl;
        Employee::setid(id);
        Employee::setsalary(salary);
        this->comm = comm;
    }
    float getcomm()
    {
        return this->comm;
    }
    void setcomm(float comm)
    {
        this->comm = comm;
    }
    void accept()
    {
        int id;
        float salary;
        string designation;
        cout << "enter id=";
        cin >> id;
        setid(id);
        cout << "enter salary=";
        cin >> salary;
        setsalary(salary);
        cout << "enter designation=";
        cin >> designation;
        setdesi(designation);
        accept_salesman();
    }
    void display()
    {
        cout << "id=" << this->getid() << endl;
        cout << "salary=" << this->getsalary() << endl;
        cout << "designation=" << this->getdesi() << endl;
        display_Salesman();
    }
};
// indirect derived class
class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
        cout << "SalesManager::constucctor" << endl;
    }
    SalesManager(int id, float salary, float bonus, float comm)
    {
        cout << "SalesManager::para::constucctor" << endl;
        Employee::setid(id);
        Employee::setsalary(salary);
        Manager::setbonus(bonus);
        Salesman::setcomm(comm);
    }
    void accept()
    {
        Manager::accept();
        Salesman::accept_salesman();
    }
    void display()
    {
        Manager::display();
        Salesman::display_Salesman();
    }
};

int menu()
{
    int choice;
    cout << "---------------------------------------" << endl;
    cout << "0. Exit" << endl;
    cout << "1. ACCEPT MANAGER" << endl;
    cout << "2. ACCEPT SALESMAN" << endl;
    cout << "3. ACCEPT SALESMANAGER" << endl;
    cout << "4. DISPLAY MANAGER" << endl;
    cout << "5. DISPLAY SALESMAN" << endl;
    cout << "6. DISPLAY SALESMANAGER" << endl;
    cout << "7. DISPLAY ALL EMPLOYESS" << endl;
    cout << "8. DISPLAY COUNT OF ALL EMPLOYESS" << endl;
    cout << "Enter Your Chocie = ";
    cin >> choice;
    cout << "--------------------------------------" << endl;
    return choice;
}

int main()
{
    Employee *employee[3];
    int choice;
    int index = 0;
    int cmanager=0;
    int csalesman=0;
    int csalesmanager=0;

    while((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            if (index < 3)
            {
                employee[index] = new Manager();
                employee[index]->accept();
                index++;
                ++cmanager;
            }
            else
            cout << "Array is Full, Cannot add the manager....." << endl;
            break;

        case 2:
            if (index < 3)
            {
                employee[index] = new Salesman();
                employee[index]->accept();
                index++;
                ++csalesman;
            }
            else            
                cout << "Array is Full, Cannot add the salesman....." << endl;

            break;

        case 3:
            if (index < 3)
            {
                employee[index] = new SalesManager();
                employee[index]->accept();
                index++;
                ++csalesmanager;
            }
            else
                cout << "Array is Full, Cannot add the salesmanager....." << endl;
            break;
            
        case 4:
            for (int i = 0; i < index; i++)
            {
                if (employee[i]->getdesi() == "manager")
                {
                    employee[i]->display();
                }
            }
            break;

        case 5:
            for (int i = 0; i < index; i++)
            {
                if (employee[i]->getdesi() == "salesman")
                {
                    employee[i]->display();
                }
            }
            break;

        case 6:
            for(int i = 0; i < index; i++)
            {
                if (employee[i]->getdesi() == "salesman")
                {
                    employee[i]->display();
                }
            }
            break;

        case 7:
            for(int i = 0; i < index; i++)
            {
                if (employee[i]->getdesi() == "salesmanager")
                {
                    employee[i]->display();
                }
            }
            break;

        case 8:
            cout<<"no.of manager="<<cmanager<<endl;
            cout<<"no.of salesman="<<csalesman<<endl;
            cout<<"no.of salesmanager="<<csalesmanager<<endl;
            break;

        default:

            cout<<"enter valid choice"<<endl;
            break;
        }
    }
    for(int i=0;i<=index;i++)
    {
        delete employee[i];
    }
    //employee="null";
    cout<<"thaks for visiting out app  -_-  -_-  -_-"<<endl;
    return 0;
}