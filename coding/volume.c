#include <stdio.h>
#include<math.h>
#define PI 3.142

int main(){
    float radius; 
    float volume;
    printf("enter radius:");
    scanf("%f", &radius);
    volume= (float)(1.3333)*PI*(radius)*(radius)*(radius);
    printf("%.2f", volume);
    return 0;
}