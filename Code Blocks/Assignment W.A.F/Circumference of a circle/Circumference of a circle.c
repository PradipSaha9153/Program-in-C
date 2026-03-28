/*t.s.r.s*/

#include<stdio.h>
#include<conio.h>

float cle(float);
main()
{
    float radius,ci;

    printf("please enter reduce -> ");
    scanf("%f",&radius);

    ci=cle(radius);

    printf("area of circle -> %f",ci);
    getch();
}
float cle(float RADIUS)
{
    float CIRCLE;

    CIRCLE=2*3.14*RADIUS;

    return CIRCLE;
}


