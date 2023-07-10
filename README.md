# \_printf

\_printf is a copy of the printf function in the C programming language.

## Installation

```bash
pip install _printf
```

## Usage

\_printf only copies the functionality for calling variadic variables of types: int, char, and char\*. This is done using %d (or %i), %c, and %s respectively.

```c
/* Returns "Hello" */
_printf("Hello");

/* Returns "My name is Chris, I am 27 years old." */
char *name = "Chris";
int age = 27;

_printf("My name is %s, I am %d years old.", name, age);
```

## Description

The \_printf function uses the following methodology:

A format string is passed to the function, followed by a variadic number of variables passed as arguments. The function then iterates through the format string, using putchar to write each character to output. If a % is encountered, the iterative variable is increased by one to check if the next character is a 'd', 'i', 'c', 's', or '%'. If a letter is encountered, the function calls get\_func, which returns a pointer to a print function that prints the value of the variadic variables passed as arguments. If a second % is encountered, the function writes a % to output. Finally, the function returns the final count of characters printed by the function.

Flow Chart:

## Contributing

This is a project created by Chris Stephens and Amir Colbert at Holberton School.
