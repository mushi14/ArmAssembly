# ARM Assembly Language
  
 ## Mushahid Hassan  
 ## CS 315  
 ## Project03  
 ## March 04, 2020    
   
* Overall Thoughts:  
Project03 was not too hard to implement. Arm assembly language can be a little confusing at times, but the online   
arm instructions guide was really helpful during those times. Overall, I had a great time figuring out how to write  
different functions in assembly.  
  
 * Assembly Functions:   
	* quadratic_s: takes in 4 parameters (x, a, b, c). Performs a quadratic equation on the given 4 parameters.  
	`(a * (x * x)) + (b * x) + c `  
	* sum_array_s: takes in an array and finds the total This is accomplished by looping through each element and adding  
  the current element to a fixed variable.  
	* find_max_s: takes in an array finds the maximum value of the array. This is accomplished by looping through each element  
  and setting the current element to a fixed variable if it is greater than the value of the variable.  
	* fib_itr_s: takes in a number n and displays the fibonacci sequence up to that number - 1. This is done by setting 0 and 1  
  as base variables and updating these values for each iteration of the loop until n iterations. During the iteration, the  
  current value is found by (n - 1) + (n - 2).  
	* fib_rec_s: takes in a number n and displays the fibonacci sequence up to that number - 1. This is done by pushing the  
  link register to the stack n number of times. When popping, a couple of cases are checked: if r0 is 0, then returns 0. If  
  r0 is 1, then returns 1. Everything after that, return (n - 1) + (n - 2) for each n.  
	* strlen_s: takes in a string and finds the length of the string. This is done by looping through the string and adding   
  to a fixed variable. If the current string is a nul byte, then the counter is returned.  
  
* Main Function:  
	* Tests: test_quadratic(), test_sum_array(), test_find_max(), test_fib_iter(), test_fib_rec(), test_strlen()  
	* How to run:  
		* Know which function to test. -q tests quadratic. -s tests sum of the array. -m tests the max of the array,  
    -fi tests the iterative fibonacci, -fr tests the recursive fibonacci, -l tests the string length
		* Step 1: `make`  
		* Step 2: `./main -flag` (flags: -q, -s, -m, -fi, -fr, -l, -h)
