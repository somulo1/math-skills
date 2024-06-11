// standard_deviation.c
#include "helpers.h"
#include <math.h>

double Calculate_standard_deviation(int data[], int n) {
    return sqrt(calculate_variance(data, n));
}
