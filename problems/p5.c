#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        // Print numbers 1 to 5
        for (int j = 1; j <= 5; j++) {
            printf("%d ", j);
        }
        printf("\n");

        // If it's not the last line, print a b c d e
        if (i != 5) {
            for (char ch = 'A'; ch <= 'E'; ch++) {
                printf("%c ", ch);
            }
            printf("\n");
        }
    }
    return 0;
}
