#include <stdio.h>
#include <conio.h>

main()
{
    int a[10];
    int t, i, j;

    // user input
    for (t = 0; t <= 9; t++)
    {
        printf("Enter %d number:-\t", t + 1);
        scanf("%d", &a[t]);
    }

    // even number
    printf("\nEven Numbers:-\n");
    for (i = 0; i <= 9; i++)
        if (a[i] % 2 == 0)
            printf("\t%d", a[i]);

    // odd number
    printf("\nOdd Numbers:-\n");
    for (i = 0; i <= 9; i++)
        if (a[i] % 2 == 1)
            printf("\t%d", a[i]);

    getch();
}

