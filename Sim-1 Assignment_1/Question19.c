// 19. Program to access a variable through pointer.
#include <stdio.h>
int main (){

    int a = 10;
    int *p;
    p = &a;
    printf("Number is %d\n", *p);
    printf("Location is %d",&a);


    return 0;
}