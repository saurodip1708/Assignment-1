#include <stdio.h>
#include <math.h>
void main(){
    float a,b,c,s,area,m;
    float e = 2;
    printf("Enter the side 1 of the triangle:");
    scanf("%f",&a);
    printf("Enter the side 2 of the triangle:");
    scanf("%f",&b);
    printf("Enter the side 3 of the triangle:");
    scanf("%f",&c);
    s = a+b+c;
    m = s/e;

    area = sqrt(m*((m-a)*(m-b)*(m-c)));

    printf("The area is:%f",area);
}