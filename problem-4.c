#include <stdio.h>
void main(){
    float r,b;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    b= 3.14*r*r;
    printf("The area is:%.2f",b);
}