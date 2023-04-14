//Area of Circle

#include <stdio.h>
#include <math.h>
#define PI 3.14159   //Defining PI as constant value here 
int main()
{
    float radius;
    // const float PI = 3.14159;   // Defining PI as a constant value using "const" keyword
    printf("Enter the value of radius:- ");
    scanf("%f", &radius);
    float areaOfCircle = PI * pow(radius, 2);
    printf("Area of circle= %f", areaOfCircle);
    return 0;
}