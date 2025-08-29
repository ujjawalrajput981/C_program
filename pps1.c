#include <stdio.h>

int main()
{
    char NAME[100];
    int AGE;
    int R;
    char C[50];

    printf("Enter your name: ");
    scanf("%s",NAME);

    printf("Enter your age: ");
    scanf("%d",&AGE);

    printf("Enter your Roll_no.: ");
    scanf("%d\n",&R);

    printf("Enter your course: ");
    scanf("%s\n",C);

    printf("\n-------------- PROFILE --------------\n");
    printf("Name : %s\n",NAME);
    printf("Age : %d\n",AGE);
    printf("Roll_no. : %d\n", R);
    printf("Cousre : %s\n",C);

    return 0;
}