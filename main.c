#include <stdio.h>

int quadratic_c(int, int, int, int);
int quadratic_s(int, int, int, int);

int main() {
	printf("%d\n", quadratic_c(12, 5, 2, 3));
	printf("%d\n", quadratic_s(12, 5, 2, 3));
	return 0;
}
