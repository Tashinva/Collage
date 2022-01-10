#include<stdio.h>
int main(){

// program to calculate simple interest

    int p,r,t,si;
    printf("Enter the principal amount: ");
    scanf("%d",&p);

    printf("Enter the rate of interest: ");
    scanf("%d",&r);

    printf("Enter the time period: ");
    scanf("%d",&t);

    si = (p*r*t)/100;
    printf("The simple interest is: %d",si);

    return 0;
}