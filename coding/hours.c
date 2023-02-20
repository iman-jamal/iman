#include <stdio.h>
#include<math.h>
    int main()
    {
    float minutes;
    float hours;
    printf("enter your ninutes:");
    scanf("%f",&minutes);
    hours=(minutes/60);
    printf("the answer is %f hours",hours);
    return 0;
}