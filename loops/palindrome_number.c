#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, original;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;

    
    if (n < 0) {
        printf("%d is not a palindrome.\n", original);
        return 0;
    }

    
    while (n != 0) {
        remainder = n % 10;           
        reversed = reversed * 10 + remainder; 
        n /= 10;                     
    }

   
    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
/*Enter an integer: 121
121 is a palindrome number.*/
