#include<stdio.h>
#include<conio.h>

void main()
{
    int x,num,i,f;
    while(x!=3)
    {
        printf("1 print all prim number under 100");
        printf("\n2 factorial of a number");
        printf("\n3 check even or odd\n");
        printf("Enter what you choose->");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            for (num=2;num<=100;num++)
            {
                for(i=2;i<num;i++)
                    if(num%i==0)
                    break;
                if(i==num)
                    printf("%d",num);
            }
            break;

        case 2:
            printf("Enter a number");
            scanf("%d",&num);
            f=1;
            while(num)
            {
                printf("%d\n",f);
                f=f*num--;
            }
            printf("The answer of factorial-> %d",f);
            break;

        case 3:
            printf("enter a number");
            scanf("%d",&num);
            if(num&1)
                printf("odd");
            else
                printf("even");
            break;
        default:
            printf("Unmatched");
        }
        getch();
    }
}
