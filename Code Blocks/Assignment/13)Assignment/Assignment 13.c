#include <stdio.h>
#include <conio.h>
void main()
{
    int n, a, temp, cal = 0;
    printf("Enter the number:- ");
    scanf("%d", &n);
    temp = n; // temporary store

    while (n > 0)
    {
        a = n % 10;
        cal = cal * 10 + a;
        n = n / 10;
    }
    if (temp == cal) // check same or not
        printf("\nYes %d is a palindrome number.",temp);
    else
        printf("\nNo %d is not a palindrome number.",temp);

    getch();
}

