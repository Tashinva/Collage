#include<stdio.h>
int main ()
{

    //16. print given star format
     

    int i, j, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }





    return 0;
}