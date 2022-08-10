#include<stdio.h>
int main()
{
    int year;
    printf("enter a number");
    scanf("%d",&year);
    if(year%100==0)
    {
      if(year%400==0)
          printf("Leap Year");
       else
          printf("Not a leap Year");   
    }
    else
    {
      if(year%4==0)
      printf("Leap Year");
      else
      printf("Not a leap Year");
    
    }
    return 0;
}