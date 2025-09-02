#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter your word : "); 
    scanf("%c", &ch);

    if (isupper(ch))
    {
        printf("upper case letter\n");
    }
    

    else if (islower(ch))
    {
        printf("lower case letter\n");
    }

    else if (isdigit(ch))
    {
        printf("digit case letter\n");
    }

    else 
    {
        printf ("special symbol\n");
    }
    
    return 0;

}