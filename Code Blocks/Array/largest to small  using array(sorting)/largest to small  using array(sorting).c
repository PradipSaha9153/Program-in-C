#include<stdio.h>
#include<conio.h>

main()
{
    int a[10];
    int i,r,t;

    for(i=0;i<=9;i++)
    {
       printf("Enter %d number :-\t",i+1);
       scanf("%d",&a[i]);

    }

    //sorting

    for(r=1;r<=9;r++)
    {
        for(i=0;i<=9-r;i++)
            if(a[i]>a[i+1])
        {
            t=a[i];
            a[i]=a[i+1];  //swap
            a[i+1]=t;
        }
    }
    printf("\n------------------------------------------------------------------------\n");
    for(i=9;i>=0;i--)
        printf("Descending %d number is- %d \t\n",i+1,a[i]);
    getch();
}
