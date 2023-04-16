#include <stdio.h>
#define ONE_KILOMETER_IN_FEET 3280.84 
#define ONE_KILOMETER_IN_METRE 1000 
#define ONE_KILOMETER_IN_INCHES 39370.08 
#define ONE_KILOMETER_IN_CENTIMETERS 100000
int main() {

    float DBC;
    
    printf("Enter the distance between cities in (km):- ");
    scanf("%f", &DBC);

    float distance_In_Feet_City = DBC * ONE_KILOMETER_IN_FEET;
    printf("Distance in Feets of cities:- %f(feet) \n", distance_In_Feet_City);

    float distance_In_Metre_City = DBC * ONE_KILOMETER_IN_METRE;
    printf("Distance in Metres of cities:- %f(m) \n", distance_In_Metre_City);    
    
    float distance_In_Inches_City = DBC * ONE_KILOMETER_IN_INCHES;
    printf("Distance in Inches of cities:- %f(inches) \n", distance_In_Inches_City);    
    
    float distance_In_Centimeters_City = DBC * ONE_KILOMETER_IN_CENTIMETERS;
    printf("Distance in Centimetres of cities:- %f(cm) \n", distance_In_Centimeters_City);    
    
    return 0;
}