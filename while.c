#include<stdio.h>

int main()

{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);

    while (a<1000)
    {
        printf("%d\n",a);
        a=a+1;
    }
    

}
