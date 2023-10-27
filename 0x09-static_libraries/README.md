# Static Libraries in C

## Introduction
This directory contains files that showcase my understanding of static library; how it works, how to create one, and how to use it with ar, ranlib, and nm commands.

## What Are Static Libraries?
Static libraries are a collection of object files that are linked into the
program during the linking phase of compilation, and are irrelevant during
runtime like shared or dynamic libraries.

## Creating Static Libraries
The archiever program 'ar' is a good tool that can be used to create a static
library (an archieve of object files), modify, and list the object files it
contains.

### Example:
`ar -rc [libname.a] [member1.o ...]`

## Library Management Commands

### ranlib - Generate index to an archieve
The program generates an index to the contents of an archieve, and is saved in
the archieve.
`ranlib [libname.a]`

### nm - List symbols from object files
`nm [libname.a]`

### ar - Create, modify, and extract an archieve
`ar -t [libname.a]` // Displays the list of an archieve.

## create_static_lib.sh
The shell script creates a static library from all the .c files in the current
directory by first compiling the .c files to object code -*.o.
## Additional Resources
`man gcc`
`man ar`
`man ranlib`
`man nm`
