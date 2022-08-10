#include<stdio.h>
int main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n);
    if(n%7==0 || n%3==0)
    printf("number is divisible by 7 or 3");
    else
    printf(" number is not divisible by 7 0r 3");
    return 0;
}