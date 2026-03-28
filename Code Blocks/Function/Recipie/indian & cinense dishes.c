
#include <stdio.h>


int main()
{
  char ch;
  int a;
  while(a<=10000)
  {
  printf("Enter 'i' for Indian & enter 'c' for Chinese: ");
  scanf("%s",&ch);
  if(ch == 'i')
  {
    printf("Indian dishes-\n");
    indian();
    printf("-------------------------------\n");
  }
  else if(ch == 'c')
{
  printf("Chinese dishes-\n");
  chinese();
  printf("-------------------------------\n");
}
else
{
  printf("unmatched");
}
}
}
indian()
{
  printf("1.Fish curry.\n");
  printf("2.Lamb vindaloo.\n");
  printf("3.Dal makhani.\n");
  printf("4.Pakora.\n");
  printf("5.Kofta.\n");
  printf("6.Korma.\n");
  printf("7.Biryani.\n");
  printf("8.Kebab.\n");
  printf("9.Butter chicken.\n");
  printf("10.Fish curry.\n");
}
chinese()
{
  printf("1.Beijing Roasted Duck.\n");
  printf("2.Kung Pao Chicken.\n");
  printf("3.Sweet and Sour Pork.\n");
  printf("4.Hot Pot.\n");
  printf("5.Cantonese Dim Sum.\n");
  printf("6.Dumplings.\n");
  printf("7.Ma Po Tofu.\n");
  printf("8.Cantonese Char Siu.\n");
}
