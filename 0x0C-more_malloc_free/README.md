# More Malloc, Free in C

This directory contains more projects on malloc and free. It will also showcase my understanding of the following functions:

### exit() - terminates a process and returns the value of status.
- 0 or EXIT_SUCCESS
- 1 or EXIT_FAILURE

### calloc() - allocates memory to an arrar
```
*calloc(size_t nmemb, size_t size)
```
It is used to allocate memory for an array of nmemb elements.

### realloc - reassign memory to a variable
```
*realloc(void *ptr, size_t size)
```
Reallocates memory of ptr to size if not less than initial allocation.

## Additional Resources
`man exit`
`man calloc`
`man realloc`