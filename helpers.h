// helpers.h
#ifndef HELPERS_H
#define HELPERS_H

#define MAX_SIZE 100

int Read_data_from_file(const char *file_path, int data[]);
double Calculate_mean(int data[], int n);
double Calculate_median(int data[], int n);
double Calculate_variance(int data[], int n);
double Calculate_standard_deviation(int data[], int n);
int Compare(const void *a, const void *b); // Declaration of compare function

#endif /* HELPERS_H */
