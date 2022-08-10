#include<stdio.h>
int main()
{
    char c;
    printf("Enter character");
    scanf("%c",&c);
    if(c>=95 && c<=122)
    printf("lower case");
    else if(c>=65 && c<=90)
    printf("Upper case");
    else if(c>=0 && c<=9)
    printf("Digit");
    else
    printf("special character");
    return 0;
}