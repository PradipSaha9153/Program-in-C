
#include <stdio.h>
#include <conio.h>

void main()
{
    int i, n, sum = 0;
    printf("Enter a number:- ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("Odd:- %d\n", i);
            sum = sum + i;
        }
    }
    printf("Sum of odd number:- %d\n", sum);

    getch();
}
