#include <stdio.h>
#include <conio.h>

void swap(int *, int *);
void main()
{
    int a, b;

    printf("Enter 1st(A) number:- ");
    scanf("%d", &a);
    printf("Enter 2nd(B) number:- ");
    scanf("%d", &b);

    printf("Before:- A = %d, B = %d\n", a, b);

    swap(&a, &b);

    printf("After:- A = %d, B = %d", a, b);

    getch();
}
void swap(int *x, int *y)
{
    *x = *x + *y; // a=30 (10+20)
    *y = *x - *y; // b=10 (30-20)
    *x = *x - *y; // a=20 (30-10)
}
