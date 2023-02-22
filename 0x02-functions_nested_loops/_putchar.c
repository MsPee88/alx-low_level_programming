#include "main.h"
#include <unistd.h>
/**
 * _putcha - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int_putcha(char c)
{
	return (write(1, &c, 1));
}
