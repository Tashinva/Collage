#include<stdio.h>
int main (){

    //15. calculate factorial of a number

    int n, i, fact=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is %d", n, fact);


    
    return 0;
}