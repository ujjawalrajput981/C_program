#include <stdio.h>
int main()
{
    int x;
    printf("Enter any no. : ");
    scanf("%d",&x);
    if (x%2==0)
    {
        printf("The given no is even no.");
    }
    else {
        printf("The given no. is odd no.");
    }

    return 0;

}