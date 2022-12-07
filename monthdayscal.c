
#include<stdio.h>

int main()

{
    int a;
    printf("enter the month");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        printf("The month is having 31 days");
        break;
   case 2:
        printf("The month is having 28 or 29 days");
        break;
     case 3:
        printf("The month is having 30 days");
        break;
    case 4:
        printf("The month is having 31 days");
        break;
    case 5:
        printf("The month is having 30 days");
        break;
    case 6:
        printf("The month is having 31 days");
        break;
    case 7:
        printf("The month is having 30 days");
        break;
    case 8:
        printf("The month is having 31 days");
        break;
    case 9:
        printf("The month is having 30 days");
        break;
    case 10:
        printf("The month is having 31 days");
        break;
    case 11:
        printf("The month is having 30 days");
        break;
    case 12:
        printf("The month is having 31 days");
        break;
    
    default:
        printf("Chutiya 12 monthch astat na");
        break;
    }

    return 0;




}