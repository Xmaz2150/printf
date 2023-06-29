#include "main.h"

int main(void)
{
	int len_taf;

	len_taf = _printf("%u", 1024);
	printf("\ntaf :%d\n", len_taf);

	len_taf = _printf("%u", -1024);
        printf("\ntaf :%d\n", len_taf);

	len_taf = _printf("%u", 0);
        printf("\ntaf :%d\n", len_taf);

	len_taf = _printf("%u", UINT_MAX);
        printf("\ntaf :%d\n", len_taf);

	len_taf = _printf("%u", UINT_MAX + 1024);
        printf("\ntaf :%d\n", len_taf);

	len_taf = _printf("There is %u bytes in %u KB\n", 1024, 1);
        printf("\ntaf :%d\n", len_taf);

	len_taf = _printf("%u - %u = %u\n", 2048, 1024, 1024);
        printf("\ntaf :%d\n", len_taf);

	len_taf = _printf("%u + %u\n", INT_MAX, INT_MAX);
	printf("\ntaf :%d\n", len_taf);
	return (0);
}
