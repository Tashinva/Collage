#include <stdio.h>
int main()
{

    //8. Find largest of two numbers
    int a, b;
    printf("Enter the A number: ");
    scanf("%d", &a);

    printf("Enter the B number: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("A is greater than B");
    }
    else if (a < b)
    {
        printf("B is greater than A");
    }
    else
    {
        printf("A and B are equal");
    }


    return 0;
}