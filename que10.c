#include<stdio.h>
int main()
{
    double cp,sp,p,l;
    printf("Enter cost price & selling price");
    scanf("%lf%lf",&cp,&sp);
    if(sp>cp)
    {
        p=sp-cp;
        p=(p/cp*100);
        printf(" profit  is %lf %%",p);

    }
    else
    {
        l=sp-cp;
        l=(l/cp*100);
        printf("Loss is %lf", l);
    }
    return 0;
}