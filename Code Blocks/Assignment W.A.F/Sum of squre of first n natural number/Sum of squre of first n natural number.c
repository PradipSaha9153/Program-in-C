/*t.s.r.s*/

#include<stdio.h>
#include<conio.h>

int natural(int);
main()
{
int r,s;
printf("enter the number");
scanf("%d",&r);
s=natural(r);
printf("Sum of the n natural number of %d",s);
getch();
}
int natural(int n)
{
int i=1,q=0;
for(i=1;i<=n;i++)
{
    q+=i*i;
}
return q;
}

