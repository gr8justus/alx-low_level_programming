# Malloc And Free in C

This directory is made up of source codes that utilize dynamic allocation of
memory during program execution using malloc and deallocation after the run time
with free.

The valgrind program - a memory debugging;  memory leak detection, and profiling
tool is also utilized to ascertain allocated and fred memory.

## Examples

### How to Use Malloc
```
char *array;
array = malloc(sizeof(char) * 4) // This allocates 4 bytes to array.
```

### How to Use Free
`free(array) // This deallocates the memory of array.`

### How to Use valgrind
Valgrind will be used to run the executable file like this
```valgrind ./exe_file```
Note: valgrind is not a builtin and has to be installed.

## Additional Resources
```
man malloc
man free
man valgrind
```
