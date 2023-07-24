/* Check the given input for vowel */

#include<stdio.h>
int main()
{
    char a;
    printf("enter any charcter: ");
    scanf("%c", &a);

    if(a == 'a' || a == 'e' || a == 'i' || a =='o' || a == 'u'){
        printf("enteres character is vowel");
    }
    else{
        printf("entered character is not vowel");
    }
    return 0;
}