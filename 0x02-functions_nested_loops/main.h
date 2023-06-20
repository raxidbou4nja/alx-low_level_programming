#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);
/**
 * print_alphabet - function to print alphabet
 *
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 */
void print_alphabet_x10(void);
/**
 * _islower - check letters in lowercase
 * @c: parameter to compare
 * Return: 1 or 0
*/
int _islower(int c);
/**
 * _isalpha - check letters
 * @c: parameter to compare
 * Return: 1 or 0
*/
int _isalpha(int c);
/**
 * print_sign - prints + if n is greater than zero
 * prints 0 if n is zero
 * prints - if n is less than zero
 * Return: 1 or 0 or -1
*/
int print_sign(int n);
/**
 * _abs - print absolute value
 * @int: integer
 * Return: integer or abs value of int
 */
int _abs(int);
#endif
