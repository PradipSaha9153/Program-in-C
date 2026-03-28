main()
{
    int x;
    printf("Please enter a number->");
    scanf("%d",x);
    int f;
    if(x%2==0)
    {
        for(int i=1;i<=x;i++)
        {
            if(x%i==2)
                f++;
        }
        if(f==2)
        {
            printf("Number is even");
        }
        else
        {
            printf("Number is odd");
        }
    }
    getch();
}
