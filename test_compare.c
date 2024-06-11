#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "helpers.h"

void test_mean(int data[], int n, double expected_mean) {
    double mean = Calculate_mean(data, n);
    assert(mean == expected_mean);
}

void test_median(int data[], int n, double expected_median) {
    double median = Calculate_median(data, n);
    assert(median == expected_median);
}

void test_variance(int data[], int n, double expected_variance) {
    double variance = Calculate_variance(data, n);
    assert(variance == expected_variance);
}

void test_standard_deviation(int data[], int n, double expected_std_dev) {
    double std_dev = Calculate_standard_deviation(data, n);
    assert(std_dev == expected_std_dev);
}

int main() {
    // Read data from data.txt
    const char *file_path = "data.txt"; // Change this to the path of your .txt file
    FILE *file = fopen(file_path, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    int data[MAX_SIZE];
    int n = 0;
    while (fscanf(file, "%d", &data[n]) == 1) {
        n++;
    }
    fclose(file);

    // Test cases
    test_mean(data, n, 10.5); // Provide your expected mean value here
    test_median(data, n, 7.0); // Provide your expected median value here
    test_variance(data, n, 25.0); // Provide your expected variance value here
    test_standard_deviation(data, n, 5.0); // Provide your expected standard deviation value here

    printf("All tests passed successfully!\n");
    return 0;
}
