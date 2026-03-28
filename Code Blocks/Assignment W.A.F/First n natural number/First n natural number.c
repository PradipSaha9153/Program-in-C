/*t.s.r.n*/

#include<stdio.h>
#include<conio.h>
int natural(int);
main()
{
int r,s;
printf("enter the number");
scanf("%d",&r);
s=natural(r);
getch();
}
int natural(int n)
{
int i=1;
while(i<=n)
{
    printf("%d\n",i);
    i++;
}
}
