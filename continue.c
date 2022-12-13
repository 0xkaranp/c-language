#include<stdio.h>

int main()

{
    int a,age;
    for(a=0; a<10; a++){
        printf("%d\nEnter a number\n",a);
        scanf("%d",&age);
        if(age>10){
            continue;
        }
        printf("hello world\n");
        printf("hi world\n");
        printf("what's up world\n");
    }
}