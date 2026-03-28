#include <stdio.h>
#include <conio.h>
void main()
{
   int i, j, a, n, counter, ave, number[30];

   // student number
   printf("Enter the value of Student: ");
   scanf("%d", &n);
   printf("\n");

   // student result
   for (i = 0; i < n; i++)
   {
      printf("Enter the %d student numbers: ", i + 1);
      scanf("%d", &number[i]);
   }

   // swaping
   for (i = 0; i < n; ++i)
   {
      for (j = i + 1; j < n; ++j)
      {
         if (number[i] < number[j])
         {
            a = number[i];
            number[i] = number[j];
            number[j] = a;
         }
      }
   }

   // display highest and second highest
   printf("\nFirst student number is: %d\n", number[0]);
   printf("Second student number is: %d\n", number[1]);
   printf("Third student number is: %d", number[2]);

   getch();
}
