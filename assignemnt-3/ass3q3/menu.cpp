# include"./menu.h"
#include <iostream>
using namespace std;

Emenu menu()
{
    int choice;
    cout << "************************************************************" << endl;
    cout << "0.EXIT" << endl;
    cout << "1.PRESENT_RADIUS" << endl;
    cout << "2.PRESENT_HEIGHT" << endl;
    cout << "3.CHANGE_RADIUS" << endl;
    cout << "4.CHANGE_HEIGHT" << endl;
    cout << "5.CALCULATE_VOLUME" << endl;
    cout << "ENTER_CHOICE" << endl;

    cin >> choice;
    cout << "************************************************************" << endl;
    return Emenu(choice);
}
