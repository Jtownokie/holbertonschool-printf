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

## Contributing

This is a project created by Chris Stephens and Amir Colbert at Holberton School.
