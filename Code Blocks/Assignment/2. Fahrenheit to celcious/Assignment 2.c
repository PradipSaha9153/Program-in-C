#include <stdio.h>
#include <conio.h>
void main()
{
    float f, c;
    printf("Please enter fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 0.5;
    printf("Celsius is = %f", c);
    getch();
}
