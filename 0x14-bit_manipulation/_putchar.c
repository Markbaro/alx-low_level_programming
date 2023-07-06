#include "main.h"

/**
 * _putchar - prints output
 * @c : char to print
 * Return: output
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
