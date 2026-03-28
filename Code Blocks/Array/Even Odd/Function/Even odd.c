#include <stdio.h>
#include <conio.h>

void user_input(int u[]);
void even(int e[]);
void odd(int o[]);
main()
{
  int a[10];

  user_input(a);
  even(a);
  odd(a);

  getch();
}
void user_input(int u[])
{
  int t;
  for (t = 0; t <= 9; t++)
  {
    printf("Enter %d number:-\t", t + 1);
    scanf("%d", &u[t]);
  }
}
void even(int e[])
{
  int i;
  printf("\nEven Numbers:-\n");
  for (i = 0; i <= 9; i++)
    if (e[i] % 2 == 0)
      printf("\t%d", e[i]);
}
void odd(int o[])
{
  int i;
  printf("\nOdd Numbers:-\n");
  for (i = 0; i <= 9; i++)
    if (o[i] % 2 == 1)
      printf("\t%d", o[i]);
}
