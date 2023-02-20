#include <stdio.h>
#include<math.h>
    int main()
    {
    float kilometers;
    float miles;
    printf("enter your kilometers:");
    scanf("%f", &kilometers);
    miles = (kilometers * 0.602);
    printf("the answer is %f miles",miles);
    return 0;
}