#include <stdio.h>
int main(){
    int num = 45025;
    // printf("Enter the five digit number:- ");
    // scanf("%d", &num);
    int sum = 0;
    
    while(num != 0){
        sum += num % 10;
        num = num/10;
    }
    printf("Digit sum: %d", sum);
}