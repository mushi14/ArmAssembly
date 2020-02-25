#include <stdio.h>

// quadratic_c calculates the solution to the quadratic equation for the given parameters
int quadratic_c(int x, int a, int b, int c) {
    int result = (a * (x * x)) + (b * x) + c;
    return result;
}
