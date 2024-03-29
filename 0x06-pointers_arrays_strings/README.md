# 0x06. C - More pointers, arrays and strings

### [0-strcat.c](https://github.com/MrGiddy/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/0-strcat.c)
Write a function that concatenates two strings.
* Prototype: char \*\_strcat(char \*dest, char \*src);
* This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
* Returns a pointer to the resulting string dest

### [1-strncat.c](https://github.com/MrGiddy/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/1-strncat.c)
Write a function that concatenates two strings.
* Prototype: char \*\_strncat(char \*dest, char \*src, int n);
* The \_strncat function is similar to the \_strcat function, except that
    * It will use at most n bytes from src; and
    * src does not need to be null-terminated if it contains n or more bytes
* Return a pointer to the resulting string dest

### [2-strncpy.c](https://github.com/MrGiddy/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/2-strncpy.c)
Write a function that copies a string.
* Prototype: char \*strncpy(char \*dest, char \*src, int n);
* Your function should work exactly like strncpy

### [3-strcmp.c](https://github.com/MrGiddy/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/3-strcmp.c)
Write a function that compares two strings.
* Prototype: int \_str.cmp(char \*s1, char \*s2)
* Your function should work exactly like strcmp

### [4-rev_array.c](https://github.com/MrGiddy/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/4-rev_array.c)
Write a function that reverses the content of an array of integers.
* Prototype: void reverse_array(int \*a, int n);
* Where n is the number of elements of the array

### [5-string_to_upper.c](https://github.com/MrGiddy/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/5-string_toupper.c)
Write a function that changes all lowercase letters of a string to uppercase.
* Prototype: char \*string_to_upper(char \*);

### [6-cap_string.c](https://github.com/MrGiddy/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/6-cap_string.c)
Write a function that capitalizes all words of a string.
* Prototype: char \*cap_string(char \*);
* Separators of words: space, tabulation, new line, comma(,), ;, ., !, ?, ", (, ), {, and }

### [7-leet.c](https://github.com/MrGiddy/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/7-leet.c)
Write a function that encodes a string into [1337](https://en.wikipedia.org/wiki/Leet)
* Letters a and A should be replaced by 4
* Letters e and E should be replaced by 3
* Letters o and O should be replaced by 0
* Letters t and T should be replaced by 7
* Letters l and L should be replaced by 1
* Prototype: char \*leet(char \*);
* you can only use one if in your code
* You can only use two loops in your code
* You are not allowed to use switch
* You are not allowed to use any ternary operation

### [100-rot13](https://github.com/MrGiddy/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/100-rot13.c)
Write a function that encodes a string using rot13.
* Prototype: char \*rot13(char \*);
* You can only use if statement once in your code
* You can only use two loops in your code
* You are not allowed to use switch
* You are not allowed to use any ternary operation

### [101-print_number.c](https://github.com/MrGiddy/alx-low_level_programming/blob/d0cbb9512db7fe6347cbf18686fdd65b98db73f1/0x06-pointers_arrays_strings/101-print_number.c)
Write a function that prints an integer.
* Prototype: void print_number(int n);
* You can only use \_putchar function to print
* You are not allowed to use long
* You are not allowed to use arrays or pointers
* You are not allowed to hard-code special values

### [102-](https://github.com/MrGiddy/alx-low_level_programming/blob/main/0x06-pointers_arrays_strings/102-magic.ci)
Add one line to [this code](https://github.com/alx-tools/make_magic_happen/blob/master/magic.c) so that the program prints a[2] = 98, followed by a new line
* You are not allowed to use the variable a in your new line of code
* You are not allowed to modify the variable p
* You can only write one statement
* You are not allowed to use ,
* You are not allowed to code anything else than the line of expeced line of code at the expected line
* Your code should be written at lien 19, before the ;
* Do not remove anything from the initial code (not even the comments)
* and don't chage anything but theline of code you are adding (don't change the spaces to tabs!)
* You are allowed to use the standard library

### [103-]()

### [104-]()
