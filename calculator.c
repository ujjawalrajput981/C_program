#include <stdio.h>
int main()
{
    int choice;
    float n1, n2, result;

    printf("-------Simple calculator-------\n");
    printf("===============================\n");
    printf("1. Addition\n");
    printf("2. subtraction\n");
    printf("3. multiplication\n");
    printf("4. division\n");
    printf("===============================\n");
    printf("Enter your choice 1, 2, 3 or 4 : ");
    scanf("%d",&choice);

    printf("Enter your 1st no. : ");
    scanf("%f",&n1);

    printf("Enter your 2nd no. : ");
    scanf("%f",&n2);

    switch(choice)
    {
        case 1:
        result = n1 + n2;
        printf("Result - %f",result);
        break;

        case 2:
        result = n1 - n2;
        printf("Result - %f",result);
        break;

        case 3:
        result = n1 * n2;
        printf("Result - %f",result);
        break;

        case 4:
        if(n2!=0)
        {
            result = n1/n2;
            printf("%f", result);
        }
        else 
        {
            printf("Divisiblity by 0 is not possible");
        }
        break;

        default:
        printf("Invalid choice");

    }
    return 0;
}