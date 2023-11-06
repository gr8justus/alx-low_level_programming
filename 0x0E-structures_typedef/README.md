# Structures, Typedef in C

## Structures

### What are Structures?

In C, a structure is a composite data type that allows you to group variables of different data types under a single name. It  represent a record and each member of the structure can have different data types.

### When to Use Structures

Structures are useful when you need to bundle related data to create more
complex data types. You should consider using structures in the following
scenarios:

- Representing a collection of related variables, such as a point (x, y), a date
(day, month, year), or a person's information (name, age, address).
- Building data structures like linked lists, trees, and graphs, where each node
can contain multiple pieces of data.
- Passing multiple variables to functions by grouping them in a structure.

### Why Use Structures

Structures improve code organization and readability. They help to manag and manipulate complex data more effectively. By encapsulating related data in a single structure, you make your code more modular and maintainable.

### How to Use Structures

To declare a structure, you need to define its structure type, and withi the structure, you specify its members (variables). Here's a simple example:

```
struct Point
{
	int x;
	int y;
};
```
##   Typedef

### What is Typedef?
Typedef is a keyword in C used to define custom data types. It allows yo to create aliases for existing data types, making your code more readabl and efficient.

### How to Use Typedef
To use typedef, you define a new name for an existing data type. This is often used to simplify complex data types like structures, pointers, and arrays.
Here's an example using structures:
```
typedef struct Date
{
	int day;
	int month;
	int year;
} Date;
```
Now, Date can be used to declare a new instance of struct Date:
```
Date today;
today.day = 6;
today.month = 11;
today.year = 2023;
```
Typedef can also be used for custom data types.
