#include <stdio.h>
#include <conio.h>
void main()
{
    char up, low, x;
    int ascii;

    printf("What do you want:-\nUp 2 Low to press(u) & Low 2 up press(l)\n= ");
    scanf("%s", &x);

    switch (x)
    {
    case 'u':
        // convert in lower case
        printf("Enter the Upper Case Character: ");
        scanf(" %c", &up);
        ascii = up + 32;
        printf("%c character in Lower case is: %c", up, ascii);
        break;
    case 'l':
        // convert in upper case
        printf("Enter the Lower Case Character: ");
        scanf("%c", &low);
        ascii = low - 32;
        printf("%c character in the Upper case is: %c", low, ascii);
        break;
    default:
        printf("Unmatched");
    }

    getch();
}
