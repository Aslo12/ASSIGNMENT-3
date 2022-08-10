#include<stdio.h>
int main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n);
    if(n%2==0&& n%3==0)
    
    printf(" number is divisible by 2 and 3");
    else
    printf("not divisible by 2 and 3");
    return 0;
}