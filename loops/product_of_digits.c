#include <stdio.h>

int main() {
    int n, last, sum = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        last = n % 10;   
        sum *= last;     
        n /= 10;        
    }

    printf("Product = %d\n", sum);

    return 0;
}
/*Enter a number: 342
Product = 24*/
