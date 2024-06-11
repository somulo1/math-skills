// mean.c
// #include <stdlib.h>
// #include <stdio.h>
#include "helpers.h"

double Calculate_mean(int data[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += data[i];
    }
    return (double)sum / n;
}

