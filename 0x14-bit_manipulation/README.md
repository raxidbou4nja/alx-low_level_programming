## Binary Operations Functions

This repository contains C functions that perform various binary operations.

### Task 0: Binary to Unsigned Int

The function `unsigned int binary_to_uint(const char *b)` converts a binary number represented as a string to an unsigned int.

- **Prototype:** `unsigned int binary_to_uint(const char *b);`
- **Input:** `b` points to a string of 0 and 1 characters.
- **Return:** The converted number, or 0 if there are characters in the string `b` that are not 0 or 1, or if `b` is NULL.

### Task 1: Print Binary Representation

The function `void print_binary(unsigned long int n)` prints the binary representation of a given number.

- **Prototype:** `void print_binary(unsigned long int n);`
- **Format:** See example
- **Constraints:** No usage of arrays, malloc, %, or / operators.

### Task 2: Get Bit

The function `int get_bit(unsigned long int n, unsigned int index)` returns the value of a bit at a given index.

- **Prototype:** `int get_bit(unsigned long int n, unsigned int index);`
- **Input:** `index` is the index (0-based) of the bit to retrieve from the number `n`.
- **Return:** The value of the bit at index `index`, or -1 if an error occurred.

### Task 3: Set Bit to 1

The function `int set_bit(unsigned long int *n, unsigned int index)` sets the value of a bit to 1 at a given index.

- **Prototype:** `int set_bit(unsigned long int *n, unsigned int index);`
- **Input:** `index` is the index (0-based) of the bit to set in the number `n`.
- **Return:** 1 if the operation was successful, or -1 if an error occurred.

### Task 4: Set Bit to 0

The function `int clear_bit(unsigned long int *n, unsigned int index)` sets the value of a bit to 0 at a given index.

- **Prototype:** `int clear_bit(unsigned long int *n, unsigned int index);`
- **Input:** `index` is the index (0-based) of the bit to clear in the number `n`.
- **Return:** 1 if the operation was successful, or -1 if an error occurred.

### Task 5: Count Flipped Bits

The function `unsigned int flip_bits(unsigned long int n, unsigned long int m)` returns the number of bits needed to flip to convert one number to another.

- **Prototype:** `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- **Return:** The number of bits needed to flip to convert `n` to `m`.
- **Constraints:** No usage of % or / operators.

