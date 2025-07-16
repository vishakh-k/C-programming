#include <stdio.h>

int main() {
    int mark1, mark2, mark3;
    float avg;

    printf("Enter 3 marks: ");
    scanf("%d %d %d", &mark1, &mark2, &mark3);

    avg = (mark1 + mark2 + mark3) / 3.0;

    printf("Average Marks: %.2f\n", avg);

    if (avg >= 80 && avg <= 100) {
        printf("Grade: A\n");
    } else if (avg >= 60 && avg < 80) {
        printf("Grade: B\n");
    } else if (avg >= 40 && avg < 60) {
        printf("Grade: C\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
