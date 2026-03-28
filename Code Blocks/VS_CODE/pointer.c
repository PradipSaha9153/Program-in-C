#include<stdio.h>
#include<conio.h>

int main()
{
    int x=5;
    int *j;
    j=&x;

    printf("%d %d %d",x,j,&x);//5 1000 1000
    //printf("%d %d %d",*&x,&j,*j);//5 2000 5

    getch();

    return 0;
}