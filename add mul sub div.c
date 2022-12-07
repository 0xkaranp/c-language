#include <stdio.h>

int main()

{
    
     int a,b,choice;
     printf("enter a number for a\n");
     scanf("%d",&a);
     printf("enter a number for b\n");
     scanf("%d",&b);
     printf("1.Additon\n2.subtraction\n3.multiplication\n4.division");
     scanf("%d",&choice);

     switch (choice)
     {
     case 1:
             printf("You have chosen addition\n");
             printf("the sum is %d",a+b);
        break;
     case 2:
             printf("You have chosen subtraction\n");
             printf("the sub is %d",a-b);
        break;
    case 3:  
             printf("You have chosen multiplication\n");
             printf("the mul is %d",a*b);
        break;
    case 4:
             printf("You have chosen division\n");
             printf("the div is %d",a/b);
        break;
     
     
     default:
         printf("invalid entry ");
        break;
     }


return 0;

}