#include <stdio.h>

int main() {
   
   int a;
   printf("enter your age\n");
   scanf("%d",&a);
   printf("You have enter %d as your age \n",a);
   
   if(a>=18){
       printf("you can vote");
   }
   else if(a<18){
       printf("you cannot vote");
   }

    return 0;
}

