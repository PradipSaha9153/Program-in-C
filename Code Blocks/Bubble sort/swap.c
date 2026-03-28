#include <stdio.h>
#include <conio.h>

void input(int i[]);
void swap(int s[]);
void display(int d[]);

void main()
{
    int a[10];

    input(a);
    swap(a);
    display(a);

    getch();
}
void input(int i[])
{
    int j;

    for (j = 0; j <= 9; j++)
    {
        printf("Enter %d number:-\t", j + 1);
        scanf("%d", &i[j]);
    }
}
void swap(int s[])
{
    int i, r, t;

    for (r = 1; r <= 9; r++)
    {
        for (i = 0; i <= 9 - r; i++)
            if (s[i] > s[i + 1])
            {
                t = s[i];
                s[i] = s[i + 1];
                s[i + 1] = t;
            }
    }
}
void display(int d[])
{
    int i;

    for (i = 0; i <= 9; i++)
        printf("\n\t%d", d[i]);
}