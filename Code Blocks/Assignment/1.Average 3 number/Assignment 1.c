#include <stdio.h>
#include <conio.h>
void main()
{
    int i, s1, s2, s3, sum = 0;
    float avg;

    printf("Enter three student number:\n");
    scanf("%d%d%d", &s1, &s2, &s3);

    sum = s1 + s2 + s3;
    avg = (float)sum / 3;
    printf("After calculation average is %f", avg);
    getch();
}
