#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "helpers.h" // Include the header file containing function declarations

// Comparison function for qsort
int Compare(const void *a, const void *b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    if (num1 < num2) return -1;
    if (num1 > num2) return 1;
    return 0;
}

// Function to calculate the mean
double Calculate_mean(int data[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += data[i];
    }
    return (double)sum / n;
}

// Function to calculate the median
double Calculate_median(int data[], int n) {
    int temp[MAX_SIZE];
    for (int i = 0; i < n; ++i) {
        temp[i] = data[i];
    }
    Qsort(temp, n, sizeof(int), Compare);
    if (n % 2 == 0) {
        return (temp[n/2 - 1] + temp[n/2]) / 2.0;
    } else {
        return temp[n/2];
    }
}

// Function to calculate the standard deviation
double Calculate_standard_deviation(int data[], int n) {
    double mean = Calculate_mean(data, n);
    double variance = 0;
    for (int i = 0; i < n; ++i) {
        variance += pow(data[i] - mean, 2);
    }
    variance /= n;
    return sqrt(variance);
}

// Function to calculate the variance
double Calculate_variance(int data[], int n) {
    double mean = Calculate_mean(data, n);
    double variance = 0;
    for (int i = 0; i < n; ++i) {
        variance += pow(data[i] - mean, 2);
    }
    variance /= n;
    return variance;
}
