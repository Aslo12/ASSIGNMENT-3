#include<stdio.h>
int main()
{
    char ch='c  ';
   // printf("Enter character");
    //scanf("%c",&ch);

    if(ch>=97 && ch<=122)
    printf("lower case");
    if(ch>=65 && ch<=90)
    printf("upper case");
   return 0;
}