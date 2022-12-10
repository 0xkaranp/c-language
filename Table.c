#include<stdio.h>

int main()

{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    
    do{
        a=a+8;
        printf("%d\n",a);
    }while(a<80);
    return 0;
    
}
