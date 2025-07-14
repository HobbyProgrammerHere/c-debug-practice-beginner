/*
 *  THIS PROGRAM CONTAINS INTENTIONAL LOGICAL BUGS TO PRACTICE DEBUGGING!
 *  ENJOY DEBUGGING - DAY - 1
 */


#include <stdio.h>

int calculate_total(int marks[], int size) {
    int total = 0;
    for (int i = 0; i <= size; i++) {
        total = total + marks[i];
    }
    return total;
}

float calculate_average(int total, int subjects) {
    return total / subjects;
}

int main() {
    int marks[3];
    int total;
    float average;

    printf("Enter marks for 3 subjects:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &marks[i]);
    }

    total = calculate_total(marks, 3);
    average = calculate_average(total, 3);

    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}
