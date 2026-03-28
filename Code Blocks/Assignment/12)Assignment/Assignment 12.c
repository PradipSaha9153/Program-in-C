#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int n, a, same, sum = 0, count = 0, c;

    printf("Enter a integer number:- ");
    scanf("%d", &n);
    same = n;

    do
    {
        n /= 10;
        ++count;
    } while (n != 0);
    printf("%d", count);

    while (n > 0)
    {
        a = n % 10;
        c = pow(count, a);
        sum += pow(count, a);
        n = n / 10;
    }
    printf("\n%d", sum);
    if (same == sum)
        printf("\nYes %d is armstrong number.", same);
    else
        printf("\nNo %d is not armstrong number.", same);
    getch();
}
