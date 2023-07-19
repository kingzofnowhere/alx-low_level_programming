#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 */
void print_alpha(void)
{
	char alpha;

	for (alpha = 'a'; alpha = 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');
}
