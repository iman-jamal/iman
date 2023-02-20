#include <stdio.h>
int main()
{
double num1;
double num2;
char operater;

printf("enter your number:");
scanf("%lf",&num1);
printf("enter your operater:");
scanf(" %c", &operater);
printf("enter your number:");
scanf("%lf", &num2);
if(operater=='+'){
    printf("%f",num1 +num2);
}
else if(operater=='-'){
    printf("%f",num1-num2);
}
else if (operater=='*'){
    printf("%f",num1*num2);}
    else if (operater=='/'){
    printf("%f",num1/num2);}
    else{
        printf("cant calcutate");}
        return 0;
    }
