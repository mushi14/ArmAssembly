#include <stdio.h>

int quadratic_c(int, int, int, int);
int quadratic_s(int, int, int, int);

int sum_array_c(int *, int);
int sum_array_s(int *, int);

int find_max_c(int *, int);
int find_max_s(int *, int);

int fib_iter_c(int);
int fib_iter_s(int);

int fib_rec_c(int);
int fib_rec_s(int);

int strlen_c(char *);
int strlen_s(char *);

int main() {
	int arr[5] = {5, 10, 1, 9, 3};
		
	printf("%d\n", quadratic_c(12, 5, 2, 3));
	printf("%d\n", quadratic_s(12, 5, 2, 3));

	printf("%d\n", sum_array_c(arr, 5));
	printf("%d\n", sum_array_s(arr, 5));
	
	printf("%d\n", find_max_c(arr, 5));
	printf("%d\n", find_max_s(arr, 5));

	printf("%d\n", fib_iter_c(15));
	printf("%d\n", fib_iter_s(15));

	printf("%d\n", strlen_c("hello my name is mushahid"));
	printf("%d\n", strlen_s("hello my name is mushahid"));
	return 0;
}
