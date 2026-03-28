main()
{
   int x,i;
   for(i=1;i<=3;i++)
   {
       printf("Enter an even number->");
        scanf("%d",&x);
   if(x%2==0)
    break;
   }
   if(i==4)
   {
       printf("You are looser");
   }
   else
   {
       printf("You are winner");
   }
   getch();
}
