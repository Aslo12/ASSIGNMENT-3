#include<stdio.h>
int main ()
{
    int a,b,c;
    printf(" Enter the value of a,b and c numbers");
    scanf("%d%d%d",&a,&b,&c);
    int disc=b*b-4*a*c;
    if(disc>0)
    printf("Real and distinct");
    else if(disc<0)
    printf("Imaginary");
    else
    printf("Real and Equal ");
    return 0;
}