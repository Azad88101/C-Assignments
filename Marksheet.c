#include <stdio.h>

int main() {

    int mathematics, english, physics, computer_science, chemistry, maximumMarks = 500;
    printf("Enter the marks obtained in Mathematics:- ");
    scanf("%d", &mathematics);

    printf("Enter the marks obtained in English:- ");
    scanf("%d", &english);

    printf("Enter the marks obtained in Physics:- ");
    scanf("%d", &physics);

    printf("Enter the marks obtained in Computer Science:- ");
    scanf("%d", &computer_science);

    printf("Enter the marks obtained in Chemistry:- ");
    scanf("%d", &chemistry);

    int aggregateMarks = mathematics + physics + computer_science + chemistry + english;
    
    float totalPercentage = aggregateMarks * 100 / maximumMarks; // Error was occured due to Operator Precedence
    
    printf("Total marks obtained %d \n", aggregateMarks);
    printf("Total percentage:- %f", totalPercentage);
    return 0;
}
