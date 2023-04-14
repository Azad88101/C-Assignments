#include <stdio.h>

int main() {

    int a, b;

    printf("Enter the value of a:- ");
    scanf("%d", &a);
    printf("Enter the value of b:- ");
    scanf("%d", &b);

    int result1 = a+= b, result2 = a-= b, result3 = a*= b, result4 = a/= b, result5 = a%=b;

    printf("Using '+=' %d \n", result1);
    printf("Using '-=' %d \n", result2);
    printf("Using '*=' %d \n", result3);
    printf("Using '/=' %d \n", result4);
    printf("Using '%=' %d \n", result5);
    return 0;
}