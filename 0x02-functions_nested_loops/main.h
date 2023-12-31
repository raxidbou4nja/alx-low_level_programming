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
 * @n: parameter to convert
 * Return: 1 or 0 or -1
*/
int print_sign(int n);
/**
 * _abs - print absolute value
 * @int: integer
 * Return: integer or abs value of int
 */
int _abs(int);
/**
 * print_last_digit - prints the last digit of a number
 * @int: integer
 * Return: 0 or 1
*/
int print_last_digit(int);
/**
 * jack_bauer - jack bauer
 *
 */
void jack_bauer(void);
/**
 * times_table - print times table from 0 to 9
 *
 *
 */
void times_table(void);
/**
 * add - print result of two numbers
 *
 * @int: integers
 * Return: returns sum of two numbers
 */
int add(int, int);
/**
 * print_to_98 - prints form given number to 98
 * @n: integer
 *
 */
void print_to_98(int n);
#endif
