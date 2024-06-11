// main.c
#include <stdio.h>
#include "helpers.h"

int main() {
    const char *file_path = "data.txt";
    int data[MAX_SIZE], n;
    n = Read_data_from_file(file_path, data);

    double mean = Calculate_mean(data, n);
    double median = Calculate_median(data, n);
    double variance = Calculate_variance(data, n);
    double standard_deviation = Calculate_standard_deviation(data, n);

    printf("Mean: %.2f\n", mean);
    printf("Median: %.2f\n", median);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", standard_deviation);

    return 0;
}
