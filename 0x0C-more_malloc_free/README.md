# 0x0C. C - More malloc, free

### [0-malloc_checked.c](https://github.com/MrGiddy/alx-low_level_programming/blob/main/0x0C-more_malloc_free/0-malloc_checked.c)
Write a function that allocates memory using malloc.
* Prototype: void \*malloc\_checked(unsigned int b); 
* Returns a pointer to the allocated memory
* If malloc fails, the malloc_checked function should cause normal process termination with a status value of 98

### [1-string_nconcat.c](https://github.com/MrGiddy/alx-low_level_programming/blob/main/0x0C-more_malloc_free/1-string_nconcat.c)
Write a function that concatenates two strings.
* Prototype: char \*string_nconcat(char \*s1, char \*s2, unsigned int n);
* The returned pointer shall point to a newly allocated space in momory, which contains s1, followed by the first n bytes of s2, and null terminated
* If the function fails, it should return NULL
* If n is greater or equal to the length of s2 then use the entire string s2
* If NULL is passed, treat it as an empty string

### [2-calloc.c](https://github.com/MrGiddy/alx-low_level_programming/blob/main/0x0C-more_malloc_free/2-calloc.c)
Write a function that allocates memory for an array, using malloc.
* Prototype: void \*\_calloc(unsigned int nmemb, unsigned int size);
* The \_calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
* The memory is set to zero
* If nmemb or size is 0, then \_calloc returns NULL
* If malloc fails, then \_calloc returns NULL

### [3-array_range.c](https://github.com/AdekunleAdeniran/low_level_programming/blob/master/0x0B-more_malloc_free/3-array_range.c)
Write a function that creates an array of integers.
* Prototype: int \*array_range(int min, int max);
* The array created should contain all the values from min (included) to max (included), ordered from min to max
* Return: the pointer to the newly created array
* If min > max, return NULL
* If malloc fails, return NULL

### [100-realloc.c](https://github.com/MrGiddy/alx-low_level_programming/blob/main/0x0C-more_malloc_free/100-realloc.c)
Write a function that reallocates a memory block using malloc and free
* Prototype: void \*\_realloc(void \*ptr, unsigned int old\_size, unsigned int new\_size);
* Where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old\_size)
* old\_size is the size, in bytes of the allocated space for ptr
* and new\_size is the new size, in bytes of the new memory block
* The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new size
* If new\_size > old\_size, the "added" memory should not be initialized
* If new\_size == old\_size do not do anything and return ptr
* If ptr is NULL, then the call is equivalent to malloc(new\_size), for all values of old\_size) and new\_size
* If new\_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL
* Don't forget to free ptr when it makes sense
