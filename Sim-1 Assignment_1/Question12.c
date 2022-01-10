#include<stdio.h>
int main (){

    //12. find largest of three numbers

    int a,b,c,max;
    printf("Enter the A number: ");
    scanf("%d", &a);

    printf("Enter the B number: ");
    scanf("%d", &b);

    printf("Enter the C number: ");
    scanf("%d", &c);

    if (a>b && a>c)
    {
        max=a;
        printf("A is greater than B and C\n");
    }
    else if (b>a && b>c)
    {
        max=b;
        printf("B is greater than A and C\n");
    }
    else
    {
        max=c;
        printf("C is greater than A and B\n");
    }

    printf("Largest number is %d",max);



    return 0;
}