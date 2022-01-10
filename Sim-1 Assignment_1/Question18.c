#include <stdio.h>

int sum(int n1, int n2);
int sub(int n1, int n2);
int mul(int n1, int n2);
int dev(int n1, int n2);

int main()
{

    // 18. all arthimetic operations using function

    int n1, n2;

    printf("Enter Value of Number 1 = ");
    scanf("%d", &n1);

    printf("Enter value of Number 2 = ");
    scanf("%d", &n2);

    sum(n1, n2);
    sub(n1, n2);
    mul(n1, n2);
    dev(n1, n2);

    return 0;
}

int sum(int n1, int n2)
{
    int sum;
    sum = n1 + n2;
    printf("Your Sum = %d\n", sum);
}

int sub(int n1, int n2)
{
    int sub;
    if (n1 > n2)
    {
        sub = n1 - n2;
    }
    else
    {
        sub = n2 - n1;
    }

    printf("Your Sub = %d\n", sub);
}

int mul(int n1, int n2)
{
    int mul;
    mul = n1 * n2;
    printf("Your Mul = %d\n", mul);
}

int dev(int n1, int n2)
{

    int dev;
    if (n1 > n2)
    {
        dev = n1 / n2;
    }
    else if (n2 > n1)
    {
        dev = n2 / n1;
    }

    else
    {
        dev = n1 / n2;
    }

    printf("Your Dev = %d\n", dev);
}
