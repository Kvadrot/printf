/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:20:55 by itykhono          #+#    #+#             */
/*   Updated: 2024/04/09 20:03:58 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int				ft_printf(const char *, ...);
int				ft_putnbr(int n);
int				ft_is_param_letter(char ch, char *arr);
int				ft_detect_param(va_list args, char ch);
unsigned int	ft_unsigned_putnbr(int unsigned n);
unsigned int	ft_print_16_base(int unsigned n, char *base);
int				ft_print_ptr(uintptr_t ptr, char *base);

#endif