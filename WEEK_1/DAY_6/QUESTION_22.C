#include <stdio.h>
int main() {
    int n, dec = 0, base = 1;
    printf("enter the value of n");
    scanf("%d", &n);
    while(n > 0) {
        dec += (n % 10) * base;
        n /= 10; base *= 2;
    }
    printf("%d", dec);
    return 0;
}