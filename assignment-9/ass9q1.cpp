// Q1. Write a user defined function factorial() that calculates factorial of given number and it throws
// exception if number entered by user is negative.


#include <iostream>
using namespace std;

class factorial
{
private:
    int num;
    int result;

public:
    factorial()
    {
        this->num = 1;
        this->result = 1;
    }
    factorial(int num)
    {
        this->num = num;
    }
    void accept()
    {
        cout << "enter the no:";
        cin >> this->num;
        if(num<0)
            throw 5;
    }
    void calculatefactorial()
    {
        int i = num;
        for (i; i >= 1; i--)
        {
            result = i*result;
        }
        cout<<"factotial of "<<num<<" is="<<result<<endl;
    }
};


int main()
{
    factorial f;
    try
    {
        f.accept(); 
        f.calculatefactorial();
    }
    catch(int error)
    {
        cout<<"enter positive integer value"<<endl;
    }
}





















