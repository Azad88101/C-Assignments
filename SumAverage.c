#include <stdio.h>

int main() {
    // Declare variables for the input number, sum, and average
    int num, sum = 0;
    float average;
    
    // Start a for loop to iterate 10 times
    // The loop variable "i" is initialized to 1 and goes up to 10
    for(int i = 1; i <= 10; i++) {
        // Prompt the user to enter a number
        printf("Enter the number: ");
        
        // Read the input number from the user and store it in the "num" variable
        scanf("%d", &num);
        
        // Add the input number to the sum variable
        sum = sum + num;
    }
    
    // Print the sum of the 10 numbers
    printf("Sum of 10 numbers is: %d\n", sum);
    
    // Calculate the average by dividing the sum by 10
    average = sum / 10.0;
    
    // Print the average of the 10 numbers
    printf("Average of digits is: %f", average);
    
    // Return 0 to indicate successful execution of the program
    return 0;
}
