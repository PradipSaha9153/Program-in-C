#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf("Please enter your number::");
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
            printf("%d is a prime number.", x);
        else
            printf("%d is not a prime number.", x);
    }
    else
        printf("%d is not a prime number.", x);
    getch();
}
