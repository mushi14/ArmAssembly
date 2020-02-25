#include <stdio.h>

// sum_array_c calculates the sum of the integers in the array
int sum_array_c(int *array, int n) {
    int i;
    int sum = 0;

    for (i = 0; i < n; i++) {
        sum = sum + array[i]; 
    }

    return sum;
}
