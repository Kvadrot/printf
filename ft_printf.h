/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:20:55 by itykhono          #+#    #+#             */
/*   Updated: 2024/04/08 18:16:57 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int				ft_printf(const char *, ...);
int				ft_putnbr(int n);
int				ft_put_chr(char ch);
int				ft_detect_param(va_list args, char ch);
unsigned int	ft_unsigned_putnbr(int unsigned n);

#endif