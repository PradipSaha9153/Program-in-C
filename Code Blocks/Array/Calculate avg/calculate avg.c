#include <stdio.h>
#include <conio.h>

main()
{
    int a[100];
    int n, i, sum = 0;
    float avg;

    printf("How many subjects there:- \t");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {

        printf("Enter %d number:-\t", i + 1);
        scanf("%d", &a[i]);

        sum += a[i];
    }

    printf("\nSum is:-\t%d\n", sum);
    avg = (float)sum / n;

    printf("\nAverage is =\t%0.2f", avg);

    getch();
}
