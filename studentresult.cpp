#include <stdio.h>

int main() {
    char names[3][50]; // Array to hold names of 3 students
    int roll_no[3];    // Array to hold roll numbers of 3 students
    float marks[3][5]; // Array to hold marks for 5 subjects for each student
    float total[3];    // Array to hold total marks for each student
    float percentage[3]; // Array to hold percentage for each student
    const int num_subjects = 5;

    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", names[i]);
        printf("Roll No: ");
        scanf("%d", &roll_no[i]);

        total[i] = 0; // Initialize total marks
        for (int j = 0; j < num_subjects; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%f", &marks[i][j]);
            total[i] += marks[i][j]; // Calculate total marks
        }

        percentage[i] = (total[i] / (num_subjects * 100)) * 100; // Calculate percentage
        printf("Total Marks: %.2f\n", total[i]);
        printf("Percentage: %.2f%%\n", percentage[i]);

        // Determine and print division
        if (percentage[i] >= 60) {
            printf("Division: First\n");
        } else if (percentage[i] >= 50) {
            printf("Division: Second\n");
        } else if (percentage[i] >= 40) {
            printf("Division: Third\n");
        } else {
            printf("Division: Fail\n");
        }
        printf("\n");
    }

    return 0;
}

