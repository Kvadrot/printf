#include "ft_printf.h"

void ft_test_s()
{
	char *str = "01234%%";
	int	origRes = printf("%%1\n");
	int mineRes = ft_printf("%%1\n");
	if ( origRes != mineRes)
		printf("+++++====+++++=++++++\n ft_test_s ORIG = %d, MINE = %d +++++====+++++=++++++\n", origRes, mineRes);
}

int main(int argc, char **argv)
{
	ft_test_s();
	// int test = 5556;
	// char *gamno = "zaqwsxcde%%%%";
	// int unsigned unsi = -1;
	
	// int a = ft_printf("%d || %s", test, gamno);
	// printf("\n");
	// printf("a = %d\n", a);
	// printf("g = %u\n", unsi);
	// ft_printf("g = %u\n", unsi);

	// int num = 214748464;
	// printf("Decimal: %i\n", num);  // prints 123 in decimal format

	// num = -0123;  // Octal represent ation of 83 (leading 0)
	// printf("Octal: %i\n", num);    // prints 123 in octal format

	// num = -0x122A23; // Hexadecimal representation of 291 (leading 0x)
	// printf("Hexadecimal: %i\n", num);  // prints 291 in hexadecimal format
	// num = 0x122A23; // Hexadecimal representation of 291 (leading 0x)
	// ft_printf("Hexadecimal: %i\n", num);  // prints 291 in hexadecimal format

	// int newHex = 255;
	// printf("test x, %d = %x", newHex, newHex);
}