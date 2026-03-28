#include <stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
    // initialization
    double p, r, t, si, ci, amount;

    // entry
    printf("Enter your principle -> ");
    scanf("%lf", &p);
    printf("Enter your rate of interest -> ");
    scanf("%lf", &r);
    printf("Enter your time -> ");
    scanf("%lf", &t);

    // calculation
    si = ((p * r * t) / 100);
    amount = p * (pow((1 + r / 100), t));
    ci = amount - p;

    // display
    printf("\nSimple interest is: %0.2lf", si);
    printf("\nCompound interest is: %0.2lf", ci);
    printf("\nDifference between Simple interest & Compound Interest: %0.2lf", ci - si);
    getch();
}
