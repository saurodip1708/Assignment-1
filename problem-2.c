
#include<stdio.h>
void main(){
    //variables
    int a,b,c,d,m;

    float e,f,g;
    //addition
    printf("The code to sum of two number\n");
    printf("Enter the first no:");
    scanf("%d",&a);
    printf("Enter the second no:");
    scanf("%d",&b);
    c=a+b;
    printf("The sum is %d\n",c);

    //substraction
    printf("The code to subtract two number\n");
    printf("Enter the first no:");
    scanf("%d",&a);
    printf("Enter the second no:");
    scanf("%d",&b);
    d=b-a;
    printf("The difference is %d\n",d);

    //multiplication
    printf("The code to multiply two number\n");
    printf("Enter the first no:");
    scanf("%d",&a);
    printf("Enter the second no:");
    scanf("%d",&b);
    m=b*a;
    printf("The multiplication is %d\n",m);

    //division
    printf("The code to divide two number\n");
    printf("Enter the first no:");
    scanf("%d",&f);
    printf("Enter the second no:");
    scanf("%d",&g);
    e=f/g;
    printf("The quotient is %f",e);

}