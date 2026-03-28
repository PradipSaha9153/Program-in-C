#include <stdio.h>
#include <conio.h>
void main()
{
    char s[200];
    int vowels = 0, consonants = 0;
    int len;

    printf("write a sentence :- ");
    gets(s);

    len=strlen(s);
    printf("Your name size is:- %d\n",len);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            ++vowels;
        }

        else if (s[i] >= 'a' & s[i] <= 'z')
        {
            ++consonants;
        }
    }

    printf("vowel :- %d", vowels);
    printf("\n consonant :- %d ", consonants);
    getch();
}
