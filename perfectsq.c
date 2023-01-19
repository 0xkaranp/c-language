#include<stdio.h>

int main()

{

  char c;
  printf("Enter any charecter that you want to find");
  scanf("%c",&c);

  if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U' ) 
  {
     printf("it is vowel charecter");
  }
  else if (c>='a' && c<='z' || c>= 'A' && c<='z') 
  {
     printf("ITS is a consonent");
  }
  else if (c>='0' || c<= '9')
  {
    printf("It is a numbers");
  }
  else{
    printf("It is specaial charecter");
  }
  
    
return 0;
}