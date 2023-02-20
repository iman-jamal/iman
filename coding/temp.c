#include <stdio.h>
int main()
{
    float celsius, farenheit;
    printf("enter temperature in celsius: \n");
    scanf("%f", &celsius);
    farenheit =((celsius *9)/5) + 32;
    printf("\n %.2f celsius = %.2f fahrenheit", celsius,farenheit);
    return 0;
}