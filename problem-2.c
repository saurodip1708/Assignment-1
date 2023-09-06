
#include<stdio.h>
void main(){
    //variables
    float a,b,c,d,e,f;
    printf("The code to perform operations in c\n");
    printf("Enter the first no:");
    scanf("%f",&a);
    printf("Enter the second no:");
    scanf("%f",&b);

    c=a+b;
    printf("The sum is %.2f\n",c);

    d=b-a;
    printf("The difference is %.2f\n",d);

    e=b*a;
    printf("The multiplication is %.2f\n",e);

    f=a/b;
    printf("The quotient is %.2f",f);

}