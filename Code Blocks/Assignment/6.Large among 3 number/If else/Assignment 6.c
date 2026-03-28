#include <stdio.h>
#include <conio.h>
void main()
{
  int a, b, c;
  printf("Enter 1st numbers :\t");
  scanf("%d", &a);
  printf("Enter 2nd numbers :\t");
  scanf("%d", &b);
  printf("Enter 3rd numbers :\t");
  scanf("%d", &c);

  if (a > b)
  {
    if (a > c)
    {
      printf("\nThe largest number is:\t%d", a);
    }
    else
    {
      printf("\nThe largest number is:\t%d", c);
    }
  }
  else if (b > c)
  {
    printf("\nThe largest number is:\t%d", b);
  }
  else
  {
    printf("\nThe largest number is:\t%d", c);
  }

  getch();
}
