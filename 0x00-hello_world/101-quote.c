#include <unistd.h>
/**
 * main - Entry point
 * Description: and that piece of art is useful" - Dora Korpar, 2015-10-19
 * Return: Always 1 (Success)
 */
int main(void)
{
	char so[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, so, 59);
	return (1);
}
