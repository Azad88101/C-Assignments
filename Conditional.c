#include <stdio.h>

int main() {
    int a = 1;
    int age;
    printf("Enter the age:- ");
    scanf("%d", &age);

    if(age == 18){
        printf("Your age is equal to '18' years. = %d", a);
    }
    else if (age > 18) {
        printf("Your age is greater than '18' years. = %d", a);
    }
    else {
        printf("Your age is smaller than 18 years.");
    }
    return 0;
}