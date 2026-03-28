/*main()
{
    int x;
    printf("please enter your number::");
    scanf("%d", &x);
    int f;
    if (x % 2 == 1)
    {
        for (int i = 1; i <= x; i++)
        {
            if (x % i == 0)
                f++;
        }
        if (f == 2)
            printf("number is prime");
        else
            printf("number is composite");
    }
    getch();
}
*/
#include<stdio.h>
int main()
{
    int n,i,c;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
                c++;
        }
        if(c==2)
            printf("Prime number");
        else
            printf("Composite number");
    }
    return 0;
}
