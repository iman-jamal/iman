#include <stdio.h>
#include<math.h>
    int main()
    {
    float a;
    float b;
    float c;
    printf("enter your first angle:");
    scanf("%d",&a);
    printf("enter your second angle:");
    scanf("%d",&b);
    c=(180-(a+b));
    printf("the answer is %d ",c);
    return 0;
}