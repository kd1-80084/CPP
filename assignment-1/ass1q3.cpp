// Q3. Write a menu driven program for Student in CPP language. Create a class student with data
// members roll no, name and marks. Implement the following functions
// void initStudent();
// void printStudentOnConsole();
// void acceptStudentFromConsole();



#include <iostream>
using namespace std;


//class using cpp
class Student
{
private:
    int rollno;
    string name;
    float marks;

public:
    void initStudent()
    {
        this->rollno = 000;
        this->name = "krishna";
        this->marks = 000;
    }

    void acceptStudentFromConsole()
    {
        cout << "enter the rollno=\n"
             << endl;
        cin >> this->rollno;
        cout << "enter the name=\n"
             << endl;
        cin >> this->name;
        cout << "enter the marks=\n"
             << endl;
        cin >> this->marks;
    }

    void printStudentOnConsole()
    {
        cout << "stuent details \n";
        cout << "\n rollno="
             << this->rollno << "\n name=" << this->name << "\n marks=" << this->marks << endl;
    }
};

int main()
{
    struct Student s1;
    int x;
    do
    {
        cout << "\n select any choice" << endl;
        cout << "\n 1.for initalisation   \n 2.accept data from user \n 3.exit "
             << endl;
        cin >> x;

        switch (x)
        {
        case 1:

            s1.initStudent();
            s1.printStudentOnConsole();
            break;

        case 2:
            s1.acceptStudentFromConsole();
            s1.printStudentOnConsole();
            break;

        case 3:
            break;

        default:
            cout << "enter valid choice" << endl;
            break;
        };

    } while (x != 3);

    return 0;
}
