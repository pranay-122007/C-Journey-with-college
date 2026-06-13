// To check a character is uppercase or lowercase

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase alphabet");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase alphabet");
    }
    else
    {
        printf("Not an alphabet");
    }
}
