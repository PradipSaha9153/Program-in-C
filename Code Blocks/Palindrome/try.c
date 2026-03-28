#include <stdio.h>
#include <conio.h>
void main()
{
    int n, original, remainder, reversed = 0;
    printf("Enter the number:- ");
    scanf("%d", &n);
    original = n; // temporary store

    // reversed integer is stored in reversed variable
    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    if (original == reversed) // check same or not
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    getch();
}
