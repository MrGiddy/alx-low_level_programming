# 0x10. C - Variadic functions

### [0-sum_them_all](https://github.com/MrGiddy/alx-low_level_programming/blob/main/0x10-variadic_functions/0-sum_them_all.c)
Write a function that returns the sum of all its parameters.
* Prototype: int sum_them_all(const unsigned int n, ...);
* if n == 0, return 0

### [1-print_numbers.c](https://github.com/MrGiddy/alx-low_level_programming/blob/main/0x10-variadic_functions/1-print_numbers.c)
Write a function that prints numbers, followed by a new line.
* Prototype: void print\_numbers(const char \*separator, const unsigned int n, ...);
* where separator is the string to be ptinted between numbers
* and n is the number of integers passed to the function
* YOu are allowed to use printf
* If separator is NULL, don't print it
* Print a new line at the end of your function

### [2-print_strings.c](https://github.com/MrGiddy/alx-low_level_programming/blob/main/0x10-variadic_functions/2-print_strings.c)
Write a function that prints strings, followed by a new line
* Prototype: void print\_strings(const char \*separator, const unsigned int n, ...);
* where separator is the string to be printed between the strings
* and n is the number of strings passed to the function
* You are allowed to use printf
* If separator is NULL, don't print it
* If one of the strint is NULL, print (nil) instead
* Print a new line at the end of your function

### [3-print_all.c](https://github.com/MrGiddy/alx-low_level_programming/blob/main/0x10-variadic_functions/3-print_all.c)
Write a function that prints anything.
* Prototype: void print\_all(const char \* const format, ...);
* where format is a list of types of arguments passed to the function
    - c: char
    - i: integer
    - f: float
    - s: char * (if the string is NULL, print (nil) instead
    - any other char should be ignored
    - see example
* You are not allowed to use for, goto, ternary operator, else, do ... while
* You can use a maximum of
    - 2 while loops
    - 2 if
* You can declare a maximul of 9 variables
* You are allowed to use printf
* Print a new line at the end of your function