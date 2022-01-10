#include <stdio.h>
int main (){

    // 20. program to access array elements through pointer.
    int a[5] = {1,2,3,4,5};
    int *p;
    p = &a[0];
    printf("Number is %d\n", *p);

    p = &a[1];
    printf("Number is %d\n", *p);

    p = &a[2];
    printf("Number is %d\n", *p);

    p = &a[3];
    printf("Number is %d\n", *p);

    p = &a[4];
    printf("Number is %d\n", *p);

    return 0;
}