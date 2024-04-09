#include "ft_printf.h"

void ft_test_s()
{
	char *str = "01234%%";
	printf("\n____________ft_test_s_________________\n");
	int	origRes = printf("%%1\n");
	int mineRes = ft_printf("%%1\n");
	if ( origRes != mineRes)
		printf("+++++====+++++=++++++\n ft_test_s ORIG = %d, MINE = %d +++++====+++++=++++++\n", origRes, mineRes);
}

void ft_test_x()
{
	int num = -12;
	printf("\n____________ft_test_big_x_________________\n");
	int	origRes = printf("orig = %x\n", num);
	int mineRes = ft_printf("mine = %x\n", num);
	if ( origRes != mineRes)
		printf("+++++====+++++=++++++\n ft_test_x ORIG = %d, MINE = %d +++++====+++++=++++++\n", origRes, mineRes);
}

void ft_test_big_X()
{
	int num = -1123121312;
	printf("\n____________ft_test_big_X_________________\n");
	int	origRes = printf("orig = %X\n", num);
	int mineRes = ft_printf("mine = %X\n", num);
	if ( origRes != mineRes)
		printf("+++++====+++++=++++++\n ft_test_big_X ORIG = %d, MINE = %d +++++====+++++=++++++\n", origRes, mineRes);
}

void ft_test_p()
{
	int num = 22;
	int *ptr = &num;
	printf("\n____________ft_test_p_________________\n");
	int	origRes = printf("orig = %p\n", ptr);
	int mineRes = ft_printf("mine = %p\n", ptr);
	if ( origRes != mineRes)
		printf("+++++====+++++=++++++ ft_test_p ORIG = %d, MINE = %d +++++====+++++=++++++\n", origRes, mineRes);
}

int main(int argc, char **argv)
{
	ft_test_s();
	ft_test_x();
	ft_test_big_X();
	ft_test_p();
}