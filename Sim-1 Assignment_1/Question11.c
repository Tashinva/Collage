#include <stdio.h>
int main()
{
    //11. calculate squear and cube of a number

    int a,s,c;
    printf("Enter the A number: ");
    scanf("%d", &a);
    
    s=a*a;
    c=a*a*a;
    
    printf("Number Square =  %d\n",s);
    printf("Number Cube =  %d",c);
    

    return 0;
}