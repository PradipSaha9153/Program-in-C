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
   printf("\nThe highest number is: %d\n", number[0]);
   printf("The 2nd highest number is = %d", number[1]);

   getch();
}
