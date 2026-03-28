main()
{
int bengal,english,geography,history,math,grade,total;
printf("Enter bengali result -> ");
scanf("%d",&bengal);
printf("Enter english result -> ");
scanf("%d",&english);
printf("Enter history result -> ");
scanf("%d",&history);
printf("Enter math result -> ");
scanf("%d",&math);
printf("Enter geography result -> ");
scanf("%d",&geography);
total=(bengal+english+geography+history+math);
printf("total musk is=%d\n",total);
if(total>=480)
{
    printf("you got 'a+' grade");
}
else if(total>=400)
{
    printf("you got 'a' grade");
}
else if(total>=380)
{
    printf("you got 'b' grade");
}
else if(total>=300)
{
    printf("you got 'c' grade");
}
else
{
    printf("you are fail");
}
getch();
}
