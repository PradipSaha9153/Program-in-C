main()
{
    int x;
    printf("Enter a naumber 1,2 or 3->");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("Akash");
        break;
        case 2:
        printf("Sudip");
        break;
        case 3:
        printf("Purnendu");
        break;
        default:
            printf("Unmatched");
    }
    getch();
}
