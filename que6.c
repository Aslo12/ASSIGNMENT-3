#include<stdio.h>
int main()
{
    int n1,n2;
    printf ("ENTER TWO NUMBERS");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    printf("n1 is big");
    else
    printf("n2 is big");
    if(n1==n2)
    printf("One");
    return 0;
}