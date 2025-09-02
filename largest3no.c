#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter 1st no : ");
    scanf("%d",&x);
    printf("Enter 2nd no : ");
    scanf("%d",&y);
    printf("Enter 3rd no : ");
    scanf("%d",&z);
    if (x>y && x>>z)
    {
        printf("%d is largest no.",x);
    }
    else if(y>x && y>z)
    {
        printf("%d is largest no.",y);
    }
    else if(z>x && z>y)
    {
        printf("%d is largest no.",z);
    }
    return 0;
    
}