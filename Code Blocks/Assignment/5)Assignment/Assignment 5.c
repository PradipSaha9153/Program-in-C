#include <stdio.h>
#include <conio.h>
void main()
{
    int year;
    printf("Enter an year:- ");
    scanf("%d", &year);
    if (year % 100 == 0)
    {
        if (year % 400)
            printf("non leap year");
        else
            printf("leap year");
    }
    else
    {
        if (year % 4)
            printf("\nNo %d is not leap year.", year);
        else
            printf("\nYes %d is leap year.", year);
    }
    getch();
}
