#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char a[20];
    int i = 0, len = 0;
    printf("Enter your name:- ");
    gets(a);
    //len = strlen(a);
    //printf("array length is:- %d", len);

    //len = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    printf("\nlength is:- %d",i);
    getch();
}
