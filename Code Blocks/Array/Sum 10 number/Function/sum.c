#include<stdio.h>
#include<conio.h>

void user_input(int u[ ]);
int calculation(int c[ ]);

main()
{
  int a[10];
  int sum,i,t;

  user_input(a);

  sum=calculation(a);
  printf("\nSum of:-\t%d",sum);

  getch();
}
void user_input(int u[ ])
{
  int t;
  for(t=0; t<=9; t++)
  {
  printf("Enter %d number:-\t",t+1);
  scanf("%d",&u[t]);
  }
}
int calculation(int c[ ])
{
  int s=0,i;
  for(i=0; i<10; i++)
  s+=c[i];

  return s;
}
