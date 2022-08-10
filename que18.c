#include<stdio.h>
int main()
{
    int n;
    printf("Enter month number");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        {
            printf("31 days in january month");
            break;
        }
        case 2:
        {
            printf("28 or 29 days in february month");
            break;
        }
        case 3:
        {
            printf("31 days in march month");
            break;
        }
        case 4:
        {
            printf("30 days in april month");
            break;
        }
        case 5:
        {
            printf("31 days in may month");
            break;
        }
        case 6:
        {
            printf("30 days in june month");
            break;
        }
        case 7:
        {
            printf("31 days in july month");
            break;
        }
        case 8:
        {
            printf("30 days in August month");
            break;
        }
        case 9:
        {
            printf("31 days in september month");
            break;
        }
        case 10:
        {
            printf("30 days in october month");
            break;
        }
        case 11:
        {
            printf("31 days in November month");
            break;
        }
        case 12:
        {
            printf("30 days in December month");
            break;
        }
        
        default:
        printf("wrong entry");


        
    }
    return 0;
}