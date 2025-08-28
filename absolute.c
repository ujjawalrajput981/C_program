#include <stdio.h>
int main()
{   
    int n;
    printf("Enter your no. : ");
    scanf("%d",&n);
    if(n<0)
    {
        n = n * (-1);
        printf("Absolute value is : %d",n);   
    }
    else {
        printf("The no. is already absolute no.");
    }
    
    return 0;
}