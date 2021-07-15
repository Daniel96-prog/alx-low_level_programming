A function that allocates memory using malloc.

Prototype: void *malloc_checked(unsigned int b);.
Returns a pointer to the allocated memory.
If malloc fails, malloc_checked will cause normal process termination with a status value of 98.