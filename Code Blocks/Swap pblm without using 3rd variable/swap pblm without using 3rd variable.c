main()
{
    int a,b;
    printf("Please enter a number of A -> ");
    scanf("%d",&a);
    printf("Please enter a number of B -> ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of A -> %d\n",a);
    printf("The value of B -> %d",b);
    getch();
}
