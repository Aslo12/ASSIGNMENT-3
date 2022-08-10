#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Three angel sides");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    printf("triangle is valid");
    else
    printf("not valid");
    return 0;
}