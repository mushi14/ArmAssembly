#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void test_sum_array() {
	int arr1[5];
	int arr2[5];
	int arr3[5];
	int arr4[5];

	for (int i = 0; i < 5; i++) {
		arr1[i] = generate_random(-99, 99);
		arr2[i] = generate_random(-99, 99);
		arr3[i] = generate_random(-99, 99);
		arr4[i] = generate_random(-99, 99);
	}

	printf("C: %d\n", sum_array_c(arr1, (sizeof(arr1) / sizeof(int))));
	printf("Assembly: %d\n", sum_array_s(arr1, (sizeof(arr1) / sizeof(int))));
	
	printf("C: %d\n", sum_array_c(arr2, (sizeof(arr2) / sizeof(int))));
	printf("Assembly: %d\n", sum_array_s(arr2, (sizeof(arr2) / sizeof(int))));
	
	printf("C: %d\n", sum_array_c(arr3, (sizeof(arr3) / sizeof(int))));
	printf("Assembly: %d\n", sum_array_s(arr3, (sizeof(arr3) / sizeof(int))));
	
	printf("C: %d\n", sum_array_c(arr4, (sizeof(arr4) / sizeof(int))));
	printf("Assembly: %d\n", sum_array_s(arr4, (sizeof(arr4) / sizeof(int))));
}

void test_find_max() {
	int arr1[1000];
	int arr2[1000];	
	int arr3[1000];
	int arr4[1000];

	for (int i = 0; i < 1000; i++) {
		arr1[i] = generate_random(-99, 99);
		arr2[i] = generate_random(-99, 99);
		arr3[i] = generate_random(-99, 99);
		arr4[i] = generate_random(-99, 99);
	}

	printf("C: %d\n", find_max_c(arr1, (sizeof(arr1) / sizeof(int))));
	printf("Assembly: %d\n", find_max_s(arr1, (sizeof(arr1) / sizeof(int))));
	
	printf("C: %d\n", find_max_c(arr2, (sizeof(arr2) / sizeof(int))));
	printf("Assembly: %d\n", find_max_s(arr2, (sizeof(arr2) / sizeof(int))));
	
	printf("C: %d\n", find_max_c(arr3, (sizeof(arr3) / sizeof(int))));
	printf("Assembly: %d\n", find_max_s(arr3, (sizeof(arr3) / sizeof(int))));
	
	printf("C: %d\n", find_max_c(arr4, (sizeof(arr4) / sizeof(int))));
	printf("Assembly: %d\n", find_max_s(arr4, (sizeof(arr4) / sizeof(int))));
}

void test_fib_iter() {
	for (int i = 0; i < 20; i++) {
		printf("C: %d\n", fib_iter_c(i));
		printf("Assembly: %d\n", fib_iter_s(i));
	}
}

int main() {
	int arr[5] = {5, -10, 1, 9, -3};
	
	printf("Quadratic Tests:\n");	
	test_quadratic();
	printf("\n");
	
	printf("Sum Array Tests:\n");	
	test_sum_array();
	printf("\n");	

	printf("Finding Max Tests:\n");	
	test_find_max();
	printf("\n");	

	printf("Fibonacci Iterative Tests:\n");	
	test_fib_iter();
	printf("\n");	

	printf("%d\n", strlen_c("hello my name is mushahid"));
	printf("%d\n", strlen_s("hello my name is mushahid"));
	return 0;
}
