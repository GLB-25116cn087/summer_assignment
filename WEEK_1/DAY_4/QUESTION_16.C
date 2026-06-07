#include <stdio.h>

int main() {
    int limit, num, temp, remainder, sum;

    printf("Enter the upper limit: ");
    scanf("%d", &limit);

    printf("Armstrong numbers between 100 and %d are:\n", limit);
    for (num = 100; num <= limit; num++) {
        temp = num;
        sum = 0;
        while (temp > 0) {
            remainder = temp % 10;
            sum = sum + (remainder * remainder * remainder);
            temp = temp / 10;
        }
        if (sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}