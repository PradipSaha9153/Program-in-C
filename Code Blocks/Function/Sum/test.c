#include<stdio.h>
#include<conio.h>

int add(int a,int b); //function declaration/global
main()
{
    int x,y,s;
    printf("Enter two number: \n");
    scanf("%d%d",&x,&y);
    s=add(x,y);  //function call
    printf("Sum is %d",s);
    getch();
}
int add(int a,int b)
{
    int c;   //local variable
    c=a+b;
    return c;
}
