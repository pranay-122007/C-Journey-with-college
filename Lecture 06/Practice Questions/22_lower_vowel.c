// To check a character is a lowercase vowel

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Lowercase vowel");
    }
    else
    {
        printf("Not a lowercase vowel");
    }
}
