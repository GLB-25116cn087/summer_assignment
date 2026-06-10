#include <stdio.h>

int main() {
    int i, j;
    char ch;

    for(i = 0; i <= 5; i++) {

        for(j = 1; j < i; j++) {
            
            printf("%c", 'A' + j);
        }

        for(j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}