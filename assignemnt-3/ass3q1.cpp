// Q1. Write a menu driven program to calculate volume of the box(length * width * height).
// Provide necessary constructors.

#include <iostream>
using namespace std;

class Box
{
private:
    float length;
    float width;
    float height;

public:
    Box()
    {
        this->length = 1;
        this->width = 1;
        this->height = 1;
    }

    Box(int length, int width, int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    void AcceptDimension()
    {
        cout << "enter length" << endl;
        cin >> length;
        cout << "enter width" << endl;
        cin >> width;
        cout << "enter height" << endl;
        cin >> height;
    }

    void DisplayVolume()
    {
        cout << "volume=" << this->length * this->width * this->height << endl;
    }
};

enum Emenu
{
    EXIT,
    ACCEPT_DIMENSION,
    DISPLAY_VOLUME
};  

Emenu menu()
{
    int choice;
    cout << "****************************************" << endl;
    cout << "0.exit" << endl;
    cout << "1.AcceptDimension" << endl;
    cout << "2.DisplayVloume" << endl;
    cout << "enter choice=";
    cin >> choice;
    cout << "******************************************" << endl;
    return Emenu(choice);
}

int main()
{
    Emenu choice;
    Box b1;
    while (choice=menu())
    {
        switch (choice)
        {
        case ACCEPT_DIMENSION:
            b1.AcceptDimension();
            break;

        case DISPLAY_VOLUME:
            b1.DisplayVolume();
            break;

        default:
            cout << "enter valid choice" << endl;
            break;
        }
    }
}