# 0x06. C - More pointers, arrays and strings

### [0-strcat.c]()

Write a function that concatenates two strings.
* Prototype: char \*\_strcat(char \*dest, char \*src);
* This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
* Returns a pointer to the resulting string dest

### [1-strncat.c]()
Write a function that concatenates two strings.
* Prototype: char \*\_strncat(char \*dest, char \*src, int n);
* The \_strncat function is similar to the \_strcat function, except that
    * It will use at most n bytes from src; and
    * src does not need to be null-terminated if it contains n or more bytes
* Return a pointer to the resulting string dest

### [2-strncpy]()
Write a function that copies a string.
* Prototype: char \*strncpy(char \*dest, char \*src, int n);
* Your function should work exactly like strncpy

### [3-strcmp.c]()
Write a function that compares two strings.
* Prototype: int \_str.cmp(char \*s1, char \*s2)
* Your function should work exactly like strcmp

### [4-rev_array.c]()

### [5-string_to_upper.c]()
Write a function that changes all lowercase letters of a string to uppercase.
* Prototype: char \*string_to_upper(char \*);
