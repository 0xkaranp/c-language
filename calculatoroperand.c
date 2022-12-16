#include<stdio.h>
#include<conio.h>

int main()

{
    int a,b;
    char choice;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Enter second number\n");
    scanf("%d",&b);
    printf("+ for addition\n- for subtraction\n* for multiplication\n/for division\n");
    fflush(stdin);  //Error found in this because of when you enters your choice the a enter is also considred as a charecter in progra//
    scanf("%c",&choice);
    
    switch(choice)
    {
        case'+':
              printf("Your choice is%c",a+b);
              break;
        case'-':
              printf("Your choice is%c",a-b);
              break;
        case '*':
              printf("Your choice is%c",a*b);
              break;
        case '/':
              printf("Your choice is%c",a/b);
              break;
        default:printf("Invlaid entry");
    }
    return 0;
    
}