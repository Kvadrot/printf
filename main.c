#include "ft_printf.h"

void ft_test_s()
{
	char *elemnt = NULL; 
	char *testStr[] = {"01234", "qopqwe 1", "", NULL};
	int minElemCounter = 0; 
	fflush(stdout);
	printf("\n____________ft_test_s_________________\n");
	for (int i = 0; i < 4; i++)
	{
		fflush(stdout);
		int	origRes = printf("ORIG _= %s\n", testStr[i]);
		int mineRes = ft_printf("MINE _= %s\n", testStr[i]);
		
		if ( origRes != mineRes)
		{
			fflush(stdout);
			printf("ft_test_s ORIG = %d, MINE = %d \n+++++====+++++=++++++\n", origRes, mineRes);		
		}
	}
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
	int *ptr = NULL;
	fflush(stdout);
	printf("\n____________ft_test_p_________________\n");
	int	origRes = printf("orig = %p\n", ptr);
	int mineRes = ft_printf("mine = %p\n", ptr);
	if ( origRes != mineRes)
	{
		fflush(stdout);
		printf("ft_test_p ORIG = %d, MINE = %d +++++====+++++=++++++\n", origRes, mineRes);
	}
	fflush(stdout);
	printf("%p", ptr);	
}

int main(int argc, char **argv)
{
	ft_test_s();
// 	ft_test_x();
// 	ft_test_big_X();
	ft_test_p();
}