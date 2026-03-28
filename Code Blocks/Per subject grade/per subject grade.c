main()
{
int bengal,english,geography,history,math,grade,total;
printf("Enter bengali result -> ");
scanf("%d",&bengal);
grade=bengal;
if(grade>=90)
{
    printf("you got 'a+' grade\n");
}
else if(grade>=70)
{
    printf("you got 'a' grade\n");
}
else if(grade>=50)
{
    printf("you got 'b' grade");
}
else if(grade>=25)
{
    printf("you got 'c' grade\n");
}
else
{
    printf("you are fail\n");
}

printf("Enter english result -> ");
scanf("%d",&english);
grade=english;
if(grade>=90)
{
    printf("you got 'a+' grade\n");
}
else if(grade>=70)
{
    printf("you got 'a' grade\n");
}
else if(grade>=50)
{
    printf("you got 'b' grade\n");
}
else if(grade>=25)
{
    printf("you got 'c' grade\n");
}
else
{
    printf("you are fail\n");
}
printf("Enter history result -> ");
scanf("%d",&history);
grade=history;
if(grade>=90)
{
    printf("you got 'a+' grade\n");
}
else if(grade>=70)
{
    printf("you got 'a' grade\n");
}
else if(grade>=50)
{
    printf("you got 'b' grade\n");
}
else if(grade>=25)
{
    printf("you got 'c' grade\n");
}
else
{
    printf("you are fail\n");
}
printf("Enter math result -> ");
scanf("%d",&math);
grade=math;
if(grade>=90)
{
    printf("you got 'a+' grade\n");
}
else if(grade>=70)
{
    printf("you got 'a' grade\n");
}
else if(grade>=50)
{
    printf("you got 'b' grade\n");
}
else if(grade>=25)
{
    printf("you got 'c' grade\n");
}
else
{
    printf("you are fail\n");
}
printf("Enter geography result -> ");
scanf("%d",&geography);
grade=geography;
if(grade>=90)
{
    printf("you got 'a+' grade\n");
}
else if(grade>=70)
{
    printf("you got 'a' grade\n");
}
else if(grade>=50)
{
    printf("you got 'b' grade\n");
}
else if(grade>=25)
{
    printf("you got 'c' grade\n");
}
else
{
    printf("you are fail\n");
}
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

