#include<stdio.h>
#include<conio.h>

main()
{
  int a[10];
  int sum=0,i,t;

  //user input
  for(t=0; t<=9; t++)
  {
  printf("Enter %d number:-\t",t+1);
  scanf("%d",&a[t]);
  }

  //collection
  for(i=0; i<10; i++)
  sum+=a[i];

  //result
  printf("\nSum of:-\t%d",sum);

  getch();
}
