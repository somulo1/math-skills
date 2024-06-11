// helpers.c
#include "helpers.h"
#include <stdio.h>
#include <math.h>

int Read_data_from_file(const char *file_path, int data[]) {
    FILE *file = fopen(file_path, "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file: %s\n", file_path);
        perror("fopen");
        return -1; // Error opening file
    }

    int i = 0;
    while (fscanf(file, "%d", &data[i]) == 1) {
        i++;
    }

    fclose(file);
    return i; // Return the number of elements read
}

double Calculate_mean(int data[], int n) {
    // Implementation of Calculate_mean function
}

double Calculate_median(int data[], int n) {
    // Implementation of Calculate_median function
}

double Calculate_variance(int data[], int n) {
    // Implementation of Calculate_variance function
}

double Calculate_standard_deviation(int data[], int n) {
    // Implementation of Calculate_standard_deviation function
}
