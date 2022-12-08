#include<stdio.h>

int main()

{
    int a;
    printf("Enter the month\n");
    scanf("%d",&a);
    
    switch(a)
    {
     case 1:
     case 3:
     case 5:
     case 7:
     case 9:
     case 11:
           printf("Month is having 31 days");
           break;
      
            case 2:printf("Month is having 28 or 29 days");
           break;
         
    case 4:
    case 6:
    case 8:
    case 10:
    case 12:printf("The month is having 30 days");
      break;
     default:printf("invalid entry");
    }
      
   
}