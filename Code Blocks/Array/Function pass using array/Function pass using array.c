#include<stdio.h>
#include<conio.h>

main()
{
    int a[10];
    input(a);
    for(int i=0; i<=9;i++)
        printf("%d",a[i]);
    getch();
}
input(int b[ ])
{
    int i;
    printf("Enter 10 number:-\n");
    for(i=0;i<=9;i++)
        scanf("%d",&b[i]);
}
