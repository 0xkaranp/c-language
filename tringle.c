#include<stdio.h>

int main()
{
    //volume of sphere//
    float r;
    printf("Enter the radis");
    scanf("%f",&r);
    r=4.0*3.14*r*r*r;
    printf("The vlomume of spher is\n%f\n",r);
    
    //volume of hemishphere//
    r=2.0*3.14*r*r*r;
    printf("The volume of hemisphere is\n%f",r);

}