#include <stdio.h>
#include <conio.h>
void main()
{
    double salary, trav, rent, daily, city, bonus, total;

    printf("Enter monthly basic salary:\t");
    scanf("%lf", &salary);
    printf("Enter travelling allowance:\t");
    scanf("%lf", &trav);
    printf("Enter house rent allowance:\t");
    scanf("%lf", &rent);
    printf("Enter Daily allowance:\t");
    scanf("%lf", &daily);
    printf("Enter city compensation allowance:\t");
    scanf("%lf", &city);
    printf("Enter half yearly bonus:\t");
    scanf("%lf", &bonus);

    total = salary + trav + rent + daily + city + bonus;
    printf("\nThe total income salary is:\t%f", total);
    getch();
}
