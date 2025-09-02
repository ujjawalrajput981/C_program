#include <stdio.h>
int main()
{
    int choice;
    float n1, n2;

    printf("-------------------------------\n");
    printf("1. To convert in meter \n");
    printf("2. To convert in inches\n");
    printf("3. To convert in cm\n");
    printf("4. To convert in feet\n");
    printf("===============================\n");
    printf("Enter your choice (1-4) : ");
    scanf("%d",&choice);

    printf("Enter distance between 2 city (in Km) : ");
    scanf("%f",&n1);

    switch(choice)
    {
        case 1:
        n2 = n1*1000;
        printf("Result = %f",n2);
        break;

        case 2:
        n2 = n1*39370;
        printf("Result = %f",n2);
        break;

        case 3:
        n2 = n1*100000;
        printf("Result = %f",n2);
        break;

        case 4:
        n2 = n1*3280;
        printf("Result = %f",n2);
        break;

        default:
        printf("invaild choice");
    }
    return 0;
}