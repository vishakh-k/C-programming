#include <stdio.h>

int main() {
    int sv, ev;
    printf("Enter start and end values: ");
    scanf("%d %d", &sv, &ev);

    printf("Odd numbers between %d and %d:\n", sv, ev);
    for (int i = sv; i <= ev; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}