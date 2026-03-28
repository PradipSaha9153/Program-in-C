#include <stdio.h>
#include <conio.h>

void main()
{
    int n, a, sum = 0;

    printf("Enter a integer number:- ");
    scanf("%d", &n);

    while (n > 0)
    {
        a = n % 10;
        sum += a;
        n = n / 10;
    }

    printf("After calculation sum is:- %d", sum);
    getch();
}
