#include <stdio.h>

int main() {
    int n, reversed = 0, last;

    printf("Enter an integer: ");
    scanf("%d", &n);

   
    while (n > 0) {
        last = n % 10;               
        reversed = reversed * 10 + last; 
        n /= 10;                      
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
/*Enter an integer: 12345
Reversed number = 54321*/
