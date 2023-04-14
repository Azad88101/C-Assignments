#include <stdio.h>

int main() {

    int c, d;

    printf("Enter the value of c:- ");
    scanf("%d", &c);

    printf("Enter the value of d:- ");
    scanf("%d", &d);

    printf("Without swapping numbers:- 'c = %d' and 'd = %d' \n" , c, d);
    c = c + d;
    d = c - d;
    c = c - d;

    printf("After swapping numbers:- 'c = %d' and 'd = %d'" , c, d);
    return 0;
}