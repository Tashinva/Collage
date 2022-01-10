#include <stdio.h>
int main()
{

    //10. find even and odd number
    int a;

    printf("Enter the A number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("A is even");
    }
    else
    {
        printf("A is odd");
    }

    return 0;
}