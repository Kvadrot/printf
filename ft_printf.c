/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:21:02 by itykhono          #+#    #+#             */
/*   Updated: 2024/04/11 13:02:18 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//  %c Prints a single character.
// • %s Prints a string (as defined by the common C convention).
// • %p The void * pointer argument has to be printed in hexadecimal format.
// • %d Prints a decimal (base 10) number.
// • %i Prints an integer in base 10.
// • %u Prints an unsigned decimal (base 10) number.
// • %x Prints a number in hexadecimal (base 16) lowercase format.
// • %X Prints a number in hexadecimal (base 16) uppercase format.
// • %% Prints a percent sign.

int ft_detect_param(va_list args, char ch)
{
	if (ch == 'c')
		return (ft_put_chr((char)va_arg(args, int)));
	else if (ch == 's')
		return (ft_put_str((char *)va_arg(args, char *)));
	else if (ch == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (ch == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (ch == 'u')
		return (ft_unsigned_putnbr((int unsigned)va_arg(args, int unsigned)));
	else if (ch == 'x')
		return (ft_print_16_base((int unsigned)va_arg(args, int unsigned), "0123456789abcdef"));
	else if (ch == 'X')
		return (ft_print_16_base((int unsigned)va_arg(args, int unsigned), "0123456789ABCDEF"));
	else if (ch == '%')
		return (ft_put_chr('%'));
	else if (ch == 'p')
	{
			return (ft_print_ptr(va_arg(args, void *), "0123456789abcdef"));
	}
	else
		return (0);
}

int	ft_is_param_letter(char ch, char *arr)
{
	int		ind;

	ind = 0;
	while (arr[ind] != '\0')
	{
		if (arr[ind] == ch)
			return (200);
		ind++;
	}
	return (-404);
}

int	ft_printf(const char *format, ...)
{
	int	i;
	int long long sym_sum;
	va_list	args;

	i = 0;
	sym_sum = 0;
	va_start(args, format);
	if (format[0] == '\0')
		return (0);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && ft_is_param_letter(format[i + 1], "cspdiuxX%") == 200)
		{
			i++;
			sym_sum += ft_detect_param(args, format[i]);
		} else {
			write(1, &format[i], 1);
			sym_sum++;
		}
		i++;
	}
	va_end(args);
	return (sym_sum);
}
