#include <stdio.h>

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            int d=64+j;
            char ch=(char)d;
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}