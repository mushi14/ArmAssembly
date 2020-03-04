#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Implicit declaration of c and assembly functions that will be used later
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

// Generates 1 random number given a range
int generate_random(int min, int max) {
	int num = 0;
	
	for (int i = 0; i < 1; i++) { 
       		num = (rand() % (max - min + 1)) + min;
	}

	return num;
}

// Tests the quadratic for c and assembly function using random numbers
void test_quadratic() {
	// Calling random number generator
	int x = generate_random(-99, 99); 
	int a = generate_random(-99, 99); 
	int b = generate_random(-99, 99); 
       	int c = generate_random(-99, 99);  

	printf("C: %d\n", quadratic_c(x, a, b, c));
	printf("Assembly: %d\n", quadratic_s(x, a, b, c));
	
	// Calling random number generator
	x = generate_random(-99, 99); 
	a = generate_random(-99, 99); 
	b = generate_random(-99, 99); 
       	c = generate_random(-99, 99);  

	printf("C: %d\n", quadratic_c(x, a, b, c));
	printf("Assembly: %d\n", quadratic_s(x, a, b, c));

	// Calling random number generator
	x = generate_random(-99, 99); 
	a = generate_random(-99, 99); 
	b = generate_random(-99, 99); 
       	c = generate_random(-99, 99);  

	printf("C: %d\n", quadratic_c(x, a, b, c));
	printf("Assembly: %d\n", quadratic_s(x, a, b, c));
	
	// Calling random number generator
	x = generate_random(-99, 99); 
	a = generate_random(-99, 99); 
	b = generate_random(-99, 99); 
       	c = generate_random(-99, 99);  
	
	printf("C: %d\n", quadratic_c(x, a, b, c));
	printf("Assembly: %d\n", quadratic_s(x, a, b, c));
}

// Tests for the sum_array c and assembly functions. Uses an array of 1000 elements
void test_sum_array() {
	int arr1[1000];
	int arr2[1000];
	int arr3[1000];
	int arr4[1000];

	// Populating the array with random numbers from range -99 to 99
	for (int i = 0; i < 1000; i++) {
		arr1[i] = generate_random(-10, 10);
		arr2[i] = generate_random(-10, 10);
		arr3[i] = generate_random(-10, 10);
		arr4[i] = generate_random(-10, 10);
	}

	// Printing both c and assembly outputs of each trial

	printf("C: %d\n", sum_array_c(arr1, (sizeof(arr1) / sizeof(int))));
	printf("Assembly: %d\n", sum_array_s(arr1, (sizeof(arr1) / sizeof(int))));
	
	printf("C: %d\n", sum_array_c(arr2, (sizeof(arr2) / sizeof(int))));
	printf("Assembly: %d\n", sum_array_s(arr2, (sizeof(arr2) / sizeof(int))));
	
	printf("C: %d\n", sum_array_c(arr3, (sizeof(arr3) / sizeof(int))));
	printf("Assembly: %d\n", sum_array_s(arr3, (sizeof(arr3) / sizeof(int))));
	
	printf("C: %d\n", sum_array_c(arr4, (sizeof(arr4) / sizeof(int))));
	printf("Assembly: %d\n", sum_array_s(arr4, (sizeof(arr4) / sizeof(int))));
}

// Finds the maximum value in a given array. Array is of size 1000
void test_find_max() {
	int arr1[1000];
	int arr2[1000];	
	int arr3[1000];
	int arr4[1000];

	// Populating the array with random numbers from range -99 to 99
	for (int i = 0; i < 1000; i++) {
		arr1[i] = generate_random(-10000, 10000);
		arr2[i] = generate_random(-10000, 10000);
		arr3[i] = generate_random(-10000, 10000);
		arr4[i] = generate_random(-10000, 10000);
	}

	// Printing both c and assembly outputs of each trial
	
	printf("C: %d\n", find_max_c(arr1, (sizeof(arr1) / sizeof(int))));
	printf("Assembly: %d\n", find_max_s(arr1, (sizeof(arr1) / sizeof(int))));
	
	printf("C: %d\n", find_max_c(arr2, (sizeof(arr2) / sizeof(int))));
	printf("Assembly: %d\n", find_max_s(arr2, (sizeof(arr2) / sizeof(int))));
	
	printf("C: %d\n", find_max_c(arr3, (sizeof(arr3) / sizeof(int))));
	printf("Assembly: %d\n", find_max_s(arr3, (sizeof(arr3) / sizeof(int))));
	
	printf("C: %d\n", find_max_c(arr4, (sizeof(arr4) / sizeof(int))));
	printf("Assembly: %d\n", find_max_s(arr4, (sizeof(arr4) / sizeof(int))));
}

// Tests for fibonacci iterative c and assembly functions
void test_fib_iter() {
	
	// Finds the first 20 fibonnaci numbers, 0-19
	for (int i = 0; i < 20; i++) {
		
		// Printing both c and assembly outputs

		printf("C: %d\n", fib_iter_c(i));
		printf("Assembly: %d\n", fib_iter_s(i));
	}
}

// Tests for the fibonnaci recursive c and assembly functions
void test_fib_rec() {
	
	// Finds the first 20 fibonnaci numbers, 0-19
	for (int i = 0; i < 20; i++) {
		
		// Printing both c and assembly outputs

		printf("C: %d\n", fib_rec_c(i));
		printf("Assembly: %d\n", fib_rec_s(i));
	}
}

// Tests for the strlen c and assembly functions
void test_strlen() {
	// 4 random strings
	char *str1 = "hello my name is mushahid hassan";
	char *str2 = "assembly is confusing!!";
	char *str3 = "this string should be 40 characters long";
	char *str4 = "bye";

	// Printing c and assembly output for each trial

	printf("C: %d\n", strlen_c(str1));
	printf("Assembly: %d\n", strlen_s(str1));
	
	printf("C: %d\n", strlen_c(str2));
	printf("Assembly: %d\n", strlen_s(str2));

	printf("C: %d\n", strlen_c(str3));
	printf("Assembly: %d\n", strlen_s(str3));

	printf("C: %d\n", strlen_c(str4));
	printf("Assembly: %d\n", strlen_s(str4));
}

// Main function
int main(int argc, char **argv) {
	// Integrating a flag system, thus a flag must be present to run a specific test
	if (argc == 2) {
		// If -q flag is present, print quadratic tests
		if (strcmp(argv[1], "-q") == 0) {
			printf("Quadratic Tests:\n");	
			test_quadratic();
		// If -s flag is present, print sum array tests
		} else if (strcmp(argv[1], "-s") == 0) {
			printf("Sum Array Tests:\n");	
			test_sum_array();
		// If -m flag is present, print the find max tests
		} else if (strcmp(argv[1], "-m") == 0) {
			printf("Finding Max Tests:\n");	
			test_find_max();
		// If -fi flag is present, print iterative fibonacci tests
		} else if (strcmp(argv[1], "-fi") == 0) {
			printf("Fibonacci Iterative Tests:\n");	
			test_fib_iter();
		// If -fr flag is present, print recursive fibonacci tests
		} else if (strcmp(argv[1], "-fr") == 0) {
			printf("Fibonacci Recursive Tests:\n");
			test_fib_rec();
		// If -l flag is present, print string length tests
		} else if (strcmp(argv[1], "-l") == 0) {
			printf("String Length Tests:\n");	
			test_strlen();
		// Flag for displaying valid flags and their output
		} else if (strcmp(argv[1], "-h") == 0) {
			printf("-q: quadratic tests\n");
			printf("-s: sum array tests\n");
			printf("-m: maximum element in array tests\n");
			printf("-fi: fibonacci iterative tests\n");
			printf("-fr: fibonacci recursive tests\n");
			printf("-l: string length tests\n");
		}	
	} else {
		printf("Number of arguments not correct.\n");
	}

	return 0;
}
