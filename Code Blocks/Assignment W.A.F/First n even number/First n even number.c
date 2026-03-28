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
int i;
for(i=1;i<=n;i++)
{
    if(i%2==0)
        printf("%d is Even\n",i);
    else
        printf("%d is not Even\n",i);
}
}
