#include <stdio.h>
int main()
{

    //14. print series of n numbers using loops
    int n, i;
    printf("Enter the number where you want to start the series of number (i): ");
    scanf("%d", &i);

    printf("where you want to end the series of number (N): ");
    scanf("%d", &n);

    if (i <= n)
    {
        for (i = i; i <= n; i++)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        printf("Your i is Bigger than N\n");
        printf("Please enter the correct value Again");
    }

    return 0;
}