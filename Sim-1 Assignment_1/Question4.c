#include<stdio.h>
int main(){

    //Program to Find Area of Circle
    float radius,area;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);

    area = 3.14*radius*radius;
    printf("Area of the circle is: %f",area);


    return 0;
}