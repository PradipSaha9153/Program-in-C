#include <stdio.h>
#include <conio.h>
void main()
{
  int a, b, c, big;
  printf("Enter 1st numbers :\t");
  scanf("%d", &a);
  printf("Enter 2nd numbers :\t");
  scanf("%d", &b);
  printf("Enter 3rd numbers :\t");
  scanf("%d", &c);
  big = a > b ? (a > c ? a : c) : (b > c ? b : c);
  printf("\nThe largest number is:\t%d", big);
  getch();
}
