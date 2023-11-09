# 0x10. C - Variadic functions

### [0-sum_them_all]()
Write a function that returns the sum of all its parameters.
* Prototype: int sum_them_all(const unsigned int n, ...);
* if n == 0, return 0

### [1-print_numbers.c]()
Write a function that prints numbers, followed by a new line.
* Prototype: void print\_numbers(const char \*separator, const unsigned int n, ...);
* where separator is the string to be ptinted between numbers
* and n is the number of integers passed to the function
* YOu are allowed to use printf
* If separator is NULL, don't print it
* Print a new line at the end of your function

### [2-print_strings.c]()
Write a function that prints strings, followed by a new line
* Prototype: void print\_strings(const char \*separator, const unsigned int n, ...);
* where separator is the string to be printed between the strings
* and n is the number of strings passed to the function
* You are allowed to use printf
* If separator is NULL, don't print it
* If one of the strint is NULL, print (nil) instead
* Print a new line at the end of your function
