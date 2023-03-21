#include <unistd.h>
/**
 * main- write a program that
 * prints _putchar,followed by a new line.
 *
 * Return: on success 0.
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
