#include <stdio.h>

int main() {

    int c, d; // c = 2 d = 3

    printf("Enter the value of c:- ");
    scanf("%d", &c);

    printf("Enter the value of d:- ");
    scanf("%d", &d);

    printf("Without swapping numbers:- 'c = %d' and 'd = %d' \n" , c, d);
    c = c + d;  // c = 2 + 3 = 5
    d = c - d;  // d = 5 - 3 = 2
    c = c - d;  // c = 5 - 2 = 3

    printf("After swapping numbers:- 'c = %d' and 'd = %d'" , c, d);
    return 0;
}