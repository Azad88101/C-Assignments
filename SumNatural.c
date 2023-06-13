#include <stdio.h>

int main() {

    int num, sum = 0;

    for(int i = 1; i <= 10; i++) {
        printf("Enter the number:- ");
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("Sum of 10 natural numbers:- %d", sum);
    return 0;
}