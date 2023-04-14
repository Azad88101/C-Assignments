#include <stdio.h>
#define ONE_KILOMETER_IN_FEET 3280.84 
#define ONE_KILOMETER_IN_METRE 1000 
#define ONE_KILOMETER_IN_INCHES 39370.08 
#define ONE_KILOMETER_IN_CENTIMETERS 100000
int main() {

    float city1, city2;


    printf("Enter the distance of City 1 in (km):- ");
    scanf("%f", &city1);
    printf("Enter the distance of City 2 in (km):- ");
    scanf("%f", &city2);


    float distance_In_Feet_City1 = city1 * ONE_KILOMETER_IN_FEET;
    printf("Distnace in Feets of city 1:- %f \n", distance_In_Feet_City1);
    float distance_In_Feet_City2 = city2 * ONE_KILOMETER_IN_FEET;
    printf("Distnace in Feets of city 2:- %f \n", distance_In_Feet_City2);


    float distance_In_Metre_City1 = city1 * ONE_KILOMETER_IN_METRE;
    printf("Distnace in Metres of city 1:- %f \n", distance_In_Feet_City1);    
    float distance_In_Metre_City2 = city2 * ONE_KILOMETER_IN_METRE;
    printf("Distnace in Metres of city 2:- %f \n", distance_In_Feet_City2);


    float distance_In_Inches_City1 = city1 * ONE_KILOMETER_IN_INCHES;
    printf("Distnace in Inches of city 1:- %f \n", distance_In_Feet_City1);    
    float distance_In_Inches_City2 = city2 * ONE_KILOMETER_IN_INCHES;
    printf("Distnace in Inches of city 2:- %f \n", distance_In_Feet_City1); 
    

    float distance_In_Centimeteres_City1 = city1 * ONE_KILOMETER_IN_CENTIMETERS;
    printf("Distnace in Centimetres of city 1:- %f \n", distance_In_Feet_City1);    
    float distance_In_Centimeteres_City2 = city2 * ONE_KILOMETER_IN_CENTIMETERS;
    printf("Distnace in Centimetres of city 2:- %f \n", distance_In_Feet_City1);    

    
    return 0;
}