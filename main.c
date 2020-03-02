#include <stdio.h>
#include <stdlib.h>

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

int generate_random(int min, int max) {
	int num = 0;
	
	for (int i = 0; i < 1; i++) { 
       		num = (rand() % (max - min + 1)) + min;
	}

	return num;
}

void test_quadratic() {
	int x = generate_random(-99, 99); 
	int a = generate_random(-99, 99); 
	int b = generate_random(-99, 99); 
       	int c = generate_random(-99, 99);  

	printf("C: %d\n", quadratic_c(x, a, b, c));
	printf("Assembly: %d\n", quadratic_s(x, a, b, c));
	
	x = generate_random(-99, 99); 
	a = generate_random(-99, 99); 
	b = generate_random(-99, 99); 
       	c = generate_random(-99, 99);  

	printf("C: %d\n", quadratic_c(x, a, b, c));
	printf("Assembly: %d\n", quadratic_s(x, a, b, c));

	x = generate_random(-99, 99); 
	a = generate_random(-99, 99); 
	b = generate_random(-99, 99); 
       	c = generate_random(-99, 99);  

	printf("C: %d\n", quadratic_c(x, a, b, c));
	printf("Assemblyn: %d\n", quadratic_s(x, a, b, c));

	x = generate_random(-99, 99); 
	a = generate_random(-99, 99); 
	b = generate_random(-99, 99); 
       	c = generate_random(-99, 99);  
	
	printf("C: %d\n", quadratic_c(x, a, b, c));
	printf("Assembly: %d\n", quadratic_s(x, a, b, c));
}

int *generate_random_array() {
	int ret[1000]
	for (int i = 0; i < 1000; i++) {
		
	}
}

void test_sum_array() {
}

int main() {
	int arr[5] = {5, -10, 1, 9, -3};
	
	printf("Quadratic Tests:\n");	
	test_quadratic();
	printf("\n");
	
	printf("Sum Array Tests:\n");	
	test_sum_array();
	printf("\n");	

	printf("%d\n", find_max_c(arr, 5));
	printf("%d\n", find_max_s(arr, 5));

	printf("%d\n", fib_iter_c(15));
	printf("%d\n", fib_iter_s(15));

	printf("%d\n", strlen_c("hello my name is mushahid"));
	printf("%d\n", strlen_s("hello my name is mushahid"));
	return 0;
}
