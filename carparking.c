#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    int amount,count;
    int r,c,b;
    while(a<=100000)
    {
    printf("Enter 1 for ricshaw\n");
    printf("Enter 2 for cars\n");
    printf("Enter 3 for bus\n");
    printf("Enter 4 for to view the record\n");
    printf("Enter 5 for delete the record\n");
    scanf("%d",&a);
    
    switch(a){
        case 1:
             if(a<=50)
             {
            r++;
             amount=amount+100;
             count=count+1;
             }
             else{
                 printf("the parking is full\n");
                 }
        break;
        case 2:
            if(a<=50)
            {
            c++;
             amount=amount+200;
             count=count+1;
            }else{
                printf("The parking is full\n");
            }
        break;
        case 3:
            if(a<=50)
            {
            b++;
             amount=amount+300;
             count=count+1;
            }else{
                printf("The parking is full");
                
            }
        break;
        case 4:
             printf("The total amount is%d\n",amount);
             printf("The total count is %d\n",count);
             printf("The total numbers of ricshaw is%d\n",r);
             printf("The total numbers of cars is %d\n",c);
             printf("The total numbers of buses is %d\n",b);
        break;
         case 5:
             amount=0;
             count=0;
        break;
        default:printf("invalid entry\n");
        
    }
    }//while loop ends
    return 0;
    
}