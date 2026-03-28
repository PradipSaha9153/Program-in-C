#include<stdio.h>
#include<conio.h>

int factorial(int);
main()
{
    int num,fac;
    printf("Enter a number:- ");
    scanf("%d",&num);

    fac=factorial(num);
    printf("Factorial number is:- %d",fac);
    getch();
}
int factorial(int no)
{
    int i,fact=1;

    for(i=1;i<=no;i++)
    fact=fact*i;

    return fact;
}
