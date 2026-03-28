main()
{
    int x,a,b,c,e;
    float d;
    printf("Press 1 for sum(+)\n");
    printf("Press 2 for subtraction(-)\n");
    printf("Press 3 for multiplication(*)\n");
    printf("Press 4 for divisible(/)\n\n");


    printf("Enter 1,2,3 or 4-> ");
    scanf("%d",&x);
    printf("\n");
    switch(x)
    {
        case 1:
            printf("Please enter first number-> ");
            scanf("%d",&a);
            printf("Please enter second number-> ");
            scanf("%d",&b);
            c=a+b;
            printf("After sum the value of-> %d",c);
        break;
        case 2:
            printf("Please enter first number-> ");
            scanf("%d",&a);
            printf("Please enter second number-> ");
            scanf("%d",&b);
            c=a-b;
            printf("After subtraction the value of-> %d",c);
        break;
        case 3:
            printf("Please enter first number-> ");
            scanf("%d",&a);
            printf("Please enter second number-> ");
            scanf("%d",&b);
            c=a*b;
            printf("After multiplication the value of-> %d",c);
        break;
        case 4:
            printf("Please enter first number-> ");
            scanf("%d",&a);
            printf("Please enter second number-> ");
            scanf("%d",&b);
            d=a/b;
            e=a%b;
            printf("After divisible quotient is-> %f\n",d);
            printf("After divisible remainder is-> %d",e);
        break;
        default:
            printf("Unmatched");
    }
    getch();
}

