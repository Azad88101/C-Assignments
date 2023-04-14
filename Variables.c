#include <stdio.h>

int main() {

    int a;
    float b;
    long c;
    double d;
    char e;


    printf("Enter Integer value:- ");
    scanf("%d", &a);
    printf("'%d', it is a Integer value \n", a);


    printf("Enter Float value:- ");
    scanf("%f", &b);
    printf("'%f', it is a float value \n", b);


    printf("Enter Long value:- ");
    scanf("%ld", &c);
    printf("'%ld', it is a long value \n", c);

    printf("Enter Double value:- ");
    scanf("%lf", &d);
    printf("'%lf', it is a double value \n", d);


    printf("Enter Character value:- ");
    scanf("%c", &e);
    printf("'%c' it is a character value \n", e);
    return 0;
}