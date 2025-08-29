#include <stdio.h>
int main()
{
    int x, y;

    printf("Enter 1st no. : ");
    scanf("%d",&x);

    printf("Enter 2nd no. : ");
    scanf("%d",&y);
    if (x>y)
    {
        printf("%d is larger", x);
    }
    else 
    { 
        printf("%d is larger", y);
    }

     return 0;
}