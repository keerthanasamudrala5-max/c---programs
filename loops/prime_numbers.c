#include <stdio.h>

int main() {
    int a, last = 2, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &a);

    if (a <= 1) {
        printf("%d is not a prime number.\n", a);
        return 0;
    }

    
    while (last <= a / 2) {
        if (a % last == 0) {
            sum = 1; 
            break;
        }
        last++; 
    }

    if (sum == 0) {
        printf("%d is a prime number.\n", a);
    } else {
        printf("%d is not a prime number.\n", a);
    }

    return 0;
}
/*Enter a positive integer: 11
11 is a prime number.*/
