#include <stdio.h>

int main() {

    int num, counter = 0, i;
    printf("Enter a number:- ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num%i == 0) {
            counter++;
        }
        
    }
    if(counter == 2) {
        printf("'%d', is a prime number", num);
    }
    else {
        printf("'%d', is not a prime number", num);
    }

    return 0;
}