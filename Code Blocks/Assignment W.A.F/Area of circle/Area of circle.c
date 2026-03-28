/*t.s.r.s*/

#include<stdio.h>
#include<conio.h>

float add(int);
main()
{
    int x;
    float y;
    printf("please enter reduce -> ");
    scanf("%d",&x);
    y=add(x);
    printf("area of circle -> %f",y);
    getch();
}
float add(int r)
{
    float a;
    a=3.14*r*r;
    return a;
}

