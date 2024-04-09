/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   param_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 10:47:14 by itykhono          #+#    #+#             */
/*   Updated: 2024/04/08 19:07:34 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_chr(char ch)
{
	write(1, &ch, 1);
	return (1);
}

int ft_put_str(char *str)
{
	int	result;
	int	ind;

	ind = 0;
	result = 0;
	while (str[ind] != '\0')
	{
		ft_put_chr(str[ind]);
		result++;
		ind++;
	}
	return (result);
}

int ft_putnbr(int n)
{
	int		i;
	int		is_negative;
	char	buffer[12];
	int		result;

	i = 0;
	result = 0;
	is_negative = 0;
	if (n == 0)
		return (ft_put_chr('0'));
	if (n == -2147483648)
		return (ft_put_str("-2147483648"));
	if (n < 0)
	{
		is_negative = 1;
		n *= -1;
	}
	while (n > 0)
	{
		buffer[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	if (is_negative)
		buffer[i++] = '-';
	while (--i >= 0)
		result += ft_put_chr(buffer[i]);
	return (result);
}

unsigned int	ft_unsigned_putnbr(int unsigned n)
{
	int		i;
	char	buffer[13];
	int		result;

	i = 0;
	result = 0;
	if (n == 0)
		return (ft_put_chr('0'));
	while (n > 0)
	{
		buffer[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	while (--i >= 0)
		result += ft_put_chr(buffer[i]);
	return (result);
}

