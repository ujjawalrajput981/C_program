#include <stdio.h>
int main()
{
    int num;
    printf("Enter anny num (1-7) : ");
    scanf("%d",&num);

    switch(num)
    {
        case 1:
        printf("Monday\n");
        break;

        case 2:
        printf("Tuesday\n");
        break;

        case 3:
        printf("Wednesday\n");
        break;
        
        case 4:
        printf("Thusday\n");
        break;

        case 5:
        printf("Friday\n");
        break;

        case 6:
        printf("Saturday\n");
        break;

        case 7:
        printf("Sunday\n");
        break;

        default:
        printf("Invailed option");
        
        
    }
    return 0;
}