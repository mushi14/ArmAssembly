#include <stdio.h>

int quadratic_c(int, int, int, int);
int quadratic_s(int, int, int, int);
int find_max_c(int *, int);
int find_max_s(int *, int);
int sum_array_c(int *, int);
int sum_array_s(int *, int);
int strlen_c(char *);
int strlen_s(char *);

int main() {
	printf("%d\n", quadratic_c(12, 5, 2, 3));
	printf("%d\n", quadratic_s(12, 5, 2, 3));

	int arr[5] = {5, 10, 1, 9, 3};
	printf("%d\n", find_max_c(arr, 5));
	printf("%d\n", find_max_s(arr, 5));

	printf("%d\n", sum_array_c(arr, 5));
	printf("%d\n", sum_array_s(arr, 5));

	printf("%d\n", strlen_c("hello"));
	printf("%d\n", strlen_s("hello"));
	return 0;
}
