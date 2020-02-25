#include <stdio.h>

// find_max_c finds the largest number in an array of integers
int find_max_c(int *array, int n) {
    int i;
    int max = array[0];

    for (i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max; 
}
