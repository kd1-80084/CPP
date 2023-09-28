// Q1. Write a class for Time and provide the functionality
// Time()
// Time(int h,int m,int s)
// getHour()
// getMinute()
// getSeconds()
// printTime()
// setHour()
// setMinute()
// setSeconds()
// In main create array of objects of Time.
// Allocate the memory for the array and the object dynamically.

#include <iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;
    int sec;

public:
    Time()
    {
        this->hr = 0;
        this->min = 0;
        this->sec = 0;
    }
    
    Time(int hr, int min, int sec)
    {
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }

    int gethour()
    {
        return this->hr;
    }

    int getmin()
    {
        return this->hr;
    }

    int getsec()
    {
        return this->hr;
    }

    void sethour(int hr)
    {
        this->hr = hr;
    }

    void setmin(int min)
    {
        this->min = min;
    }

    void setsec(int sec)
    {
        this->sec = sec;
    }

    void printTime()
    {
        cout << "time is=" << hr << ":" << min << ":" << sec << endl;
    }
};

int main()
{
    Time **arr = new Time *[3]; // dynamic 1D array allocation

    // Dynamic 2D array allocation.
    arr[0] = new Time(10, 5, 15);
    arr[1] = new Time(12, 10, 20);
    arr[2] = new Time(5, 15, 25);

    for (int i = 0; i < 3; i++)
    {
        arr[i]->printTime();
    }

    for (int i = 0; i < 3; i++)
    {
        delete arr[i];
    }

    delete[] arr;

    return 0;
}