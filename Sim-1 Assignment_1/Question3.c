#include<stdio.h>

int sum(int n1 ,int n2)
int sub(int n1 ,int n2)
int mul(int n1 ,int n2)
int dev(int n1 ,int n2)

int main ()
{

    //program to perform all arithmetic Operation

    int n1, n2;

    printf("Enter Value of Number 1 = ");
    scanf("%d",&n1);

    printf("Enter value of Number 2 = ");
    scanf("%d",&n2);

    sum();
    sub();
    mul();
    dev();

    return 0;
}

int sum(int n1 ,int n2)
{
    int sum;
    sum = n1 + n2 ;
    
}
