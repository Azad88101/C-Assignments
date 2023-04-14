#include <stdio.h>

int main() {

    float degreeCelsius;
    printf("Enter the value in Celsius:- ");
    scanf("%f", &degreeCelsius);
    float degreeFahreheit = (degreeCelsius * 9 / 5) + 32;
    printf("Temperature in degree celsius:- %f", degreeFahreheit);
    return 0;
}