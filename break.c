#include<stdio.h>

int main()

{
    int a,age;
    
    for(a=0; a<10; a++)
    {
        printf("%d\n Enter a number\n",a);
        scanf("%d",&age);
        if(age>10)
        {
            break;
        }
    }
}