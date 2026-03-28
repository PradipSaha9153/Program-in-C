main()
{
int b,e,h,m,g;
float r;
printf("Enter bengali result -> ");
scanf("%d",&b);
printf("Enter english result -> ");
scanf("%d",&e);
printf("Enter history result -> ");
scanf("%d",&h);
printf("Enter mathematics result -> ");
scanf("%d",&m);
printf("Enter geography result -> ");
scanf("%d",&g);
r=(b+e+h+m+g)*0.2;
printf("total average is= %f",r);
getch();
}
