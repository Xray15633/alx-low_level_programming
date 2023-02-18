#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *Print all the letters except q and e
 * Return: Always 0(Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
