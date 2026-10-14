#include <stdio.h>

int main() {
    long long n;
    int count = 0;
    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n < 0) n = -n;   // handle negative numbers

    if (n == 0) {
        count = 1;
    } else {
        while (n > 0) {
            count++;
            n /= 10;
        }
    }
    printf("Number of digits = %d\n", count);
    return 0;
}
