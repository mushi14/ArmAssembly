#include <stdio.h>

// quadratic_c calculates the solution to the quadratic equation for the given parameters
int quadratic_c(int x, int a, int b, int c) {
    int result = (a * (x * x)) + (b * x) + c;
    return result;
}

// sum_array_c calculates the sum of the integers in the array
int sum_array_c(int *array, int n) {
    int i;
    int sum = 0;

    for (i = 0; i < n; i++) {
        sum = sum + array[i]; 
    }

    return sum;
}

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

// fib_iter_c iteratively determines the value of the nth number in the Fibonacci sequence
int fib_iter_c(int n) {
    int prev_prev_num = 0, prev_num = 0, cur_num = 1;

    if (n == 0) {
        return 0;
    }
    for (int i = 1; i < n ; i++) {
        prev_prev_num = prev_num;
        prev_num = cur_num;
        cur_num = prev_prev_num + prev_num;
    }
    return cur_num;
}

// fib_rec_c recursively determines the value of the nth number in the Fibonacci sequence
int fib_rec_c(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fib_rec_c(n - 1) + fib_rec_c(n - 2);
    }
}

// strlen_c counts the number of characters in a C string
int strlen_c(char *s) {
    int i = 0;

    while (s[i] != '\0') {
        i++;
    }

    return i;
}

int main() {
	printf("%d\n",strlen_c("hello"));
}