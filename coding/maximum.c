#include<stdio.h>
int main(){
float numb1;
float numb2;
float numb3;
printf("enter your number:");
scanf("%f",&numb1);
printf("enter your number:");
scanf("%f",&numb2);
printf("enter your number:");
scanf("%f", &numb3);
if (numb1 >=numb2 && numb1 >=numb3){
printf("number 1 is greater");}
else if( numb2>=numb1 && numb2>= numb3){
    printf("number 2 is greater");
}
else
{
    printf("numb3 is greater");
}
return 0;
}

   





