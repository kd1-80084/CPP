#include "./cylinder.h"
#include "./menu.h"

int main()
{
   
    Cylinder c1;
    Emenu choice;
    while(choice=menu())
    {
        switch (choice)
        {
        case GET_RADIUS:
            cout << "value of radius=" << c1.getRadius()<<endl;
            break;

        case GET_HEIGHT:
            cout << "value of height=" << c1.getHeight()<<endl;
            break;
        
        case CHANGE_RADIUS:
            double radius;
            cout<<"enter changed radius=";
            cin>>radius;
            c1.setRadius(radius);
            cout<<"radius is changed"<<endl;
            break;

        case CHANGE_HEIGHT:
            double height;
            cout<<"enter changed height=";
            cin>>height;
            c1.setHeight(radius);
            cout<<"height is changed"<<endl;
            break;

        case CALCULATE_VOLUME:
            c1.ptintVolume();
            break;

        default:
            cout<<"enter valid choice"<<endl;
            break;
        }
    }
    return 0;
}
