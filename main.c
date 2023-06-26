#include "main.h"

int main(void)
{
	int len_taf, len_og;

	len_taf = _printf("Hello there, 7 is the number, but %s is the name", "King");
	printf("\ntaf :%d\n", len_taf);

	len_og = printf("Hello there, 7 is the number, but %s is the name", "King");
	printf("\nog :%d\n", len_og);
	return (0);
}
