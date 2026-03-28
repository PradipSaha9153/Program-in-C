main()
{
    char x;
    int a,b;
    float d,e;
    while(x!=4)
    {
    printf("Do you want to calculate(+,-,*,/)-> ");
    scanf("%s",&x);
    printf("\n");
    switch(x)
    {
        case '+':
            printf("Please enter first number-> ");
            scanf("%d",&a);
            printf("Please enter second number-> ");
            scanf("%d",&b);

            printf("After sum the value of-> %d",a+b);
        break;
        case '-':
            printf("Please enter first number-> ");
            scanf("%d",&a);
            printf("Please enter second number-> ");
            scanf("%d",&b);

            printf("After subtraction the value of-> %d",a-b);
        break;
        case '*':
            printf("Please enter first number-> ");
            scanf("%d",&a);
            printf("Please enter second number-> ");
            scanf("%d",&b);

            printf("After multiplication the value of-> %d",a*b);
        break;
        case '/':
            printf("Please enter first number-> ");
            scanf("%f",&d);
            printf("Please enter second number-> ");
            scanf("%f",&e);

            printf("After divisible the value of-> %f\n",d/e);
        break;
        default:
            printf("Unmatched");
    }
    printf("\n----------------------------------------------------------\n");
    }
    getch();
}



