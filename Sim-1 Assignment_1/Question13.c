#include <stdio.h>
int main(){

    //13. find whether given character is vowel or consonant
    char a;
    printf("Enter the A character: ");
    scanf("%c", &a);

    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        printf("A is vowel");
    }
    else
    {
        printf("A is consonant");
    }


    return 0;
}