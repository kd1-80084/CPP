#include <stdio.h>

// Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
// day, month, year. Implement the following functions.
// void initDate(struct Date* ptrDate);
// void printDateOnConsole(struct Date* ptrDate);
// void acceptDateFromConsole(struct Date* ptrDate);

struct Date
{
    int day;
    int month;
    int year;
};

void initDate(struct Date *d1);
void acceptDateFromConsole(struct Date *d1);
void printDateOnConsole(struct Date *d1);

void initDate(struct Date *d1)
{
    d1->year = 1900;
    d1->month = 01;
    d1->day = 01;
}

void acceptDateFromConsole(struct Date *d1)
{
    printf("enter the year=\n");
    scanf("%d", &d1->year);
    printf("enter the month=\n");
    scanf("%d", &d1->month);
    printf("enter the day=\n");
    scanf("%d", &d1->day);
}

void printDateOnConsole(struct Date *d1)
{
    printf("date=%d:%d:%d", d1->year, d1->month, d1->day);
}

int main()
{
    struct Date d1;
    int x;
    do
    {
        printf("\n select any choice");
        printf("\n 1.for initalisation   \n 2. for accept from user \n 0.exit \n");
        scanf("\n %d", &x);

        if (x >= 0 && x < 3)
        {
            switch (x)
            {
            case 1:

                initDate(&d1);
                printDateOnConsole(&d1);
                break;

            case 2:
                acceptDateFromConsole(&d1);
                printDateOnConsole(&d1);
                break;
            };
        }
        else
            printf("enter valid choice");

    } while (x != 0);

    return 0;
}