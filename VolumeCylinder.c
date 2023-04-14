#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main() {

    float radius, height, volume;
    printf("Enter the value of radius:- ");
    scanf("%f", &radius);
    printf("Enter the value of height:- ");
    scanf("%f", &height);
    volume = PI * pow(radius, 2) * height;
    printf("Volume of cylinder is:- %f", volume);
    return 0;
}