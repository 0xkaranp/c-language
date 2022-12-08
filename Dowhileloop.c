#include<stdio.h>

int main()

{
   
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    do{
        num=num+1;
        printf("%d\n",num);

    }while(num<1000);

    return 0;

}
