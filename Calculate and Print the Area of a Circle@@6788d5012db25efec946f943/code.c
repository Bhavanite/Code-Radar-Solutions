#include<stdio.h>
int main(){
    float area,radius;
    const float PIE = 3.14;
    scanf("%f",&radius);
    area = PIE * radius * radius;
    printf("Area: %.2f",area);
    return 0;
}