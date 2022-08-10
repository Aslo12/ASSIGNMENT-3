#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three number");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b && a>c)
  printf("A is big %d",a);
 else if(b>a && b>c)
  printf("B is big %d",b);
  else
  printf("C is big %d",c);
 return 0;
}