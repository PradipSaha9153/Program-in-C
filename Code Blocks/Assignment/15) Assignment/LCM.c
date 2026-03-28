#include <stdio.h>
#include <conio.h>
void main()
{
    int x, y, i, gcd, lcm;
    printf("Enter two positive number: ");
    scanf("%d%d", &x, &y);
    for (i = 1; i <= x && i <= y; ++i)
    {
        if (x % i == 0 && y % i == 0)
        {
            gcd = i;
        }
    }
    lcm = (x * y) / gcd;
    printf("The LCM of %d and %d is %d", x, y, lcm);
    getch();
}
