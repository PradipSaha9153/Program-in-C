int main()
{
    int a[6];

    printf("Enter two number ");
    scanf("%d%d",&a[0],&a[1]);

    a[3]=a[0]+a[1];

    printf("%d",a[3]);
    getch();

    printf("Enter two number ");
    scanf("%d%d",&a[4],&a[5]);

    a[2]=a[0]-a[5];

    printf("%d",a[2]);
    getch();
}
