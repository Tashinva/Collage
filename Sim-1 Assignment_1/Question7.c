#include <stdio.h>
int main()
{

    // swap two number without using third variable
    int a, b;
    printf("Enter the A number: ");
    scanf("%d", &a);
    printf("Enter the B number: ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    //a= 4 
    //b= 3
    a = a + b;  //7 = 4 + 3
    b = a - b;  //4 = 7 - 3
    a = a - b;  //3 = 7 - 4
    printf("After swapping:  A = %d, b = %d", a, b);

    return 0;
}