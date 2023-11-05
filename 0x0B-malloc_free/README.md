# 0x0B. C - malloc, free

### [0-create_array.c]()
Write a function that creates an array of chars, and initializes it with a specific char.
* Prototype: char \*create_arrY(unsigned int size, char c);
* Returns NULL if size = 0
* Returns a pointer to the array, or NULL if it fails

## [1-strdup.c]()
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of a string given as a parameter.
* Prototype: char \_strdup(char \*str);
* The \_strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory of the new string is obtained with malloc, and can be freed with free.
* On success, the \_strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
