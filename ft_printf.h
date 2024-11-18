/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:42:37 by toto              #+#    #+#             */
/*   Updated: 2024/11/17 21:11:46 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdint.h>

void	ft_putstr_count(char *str, int *count);
void	ft_check_option(char c, va_list args, int *count);
void	ft_parse_printf(const char *str, va_list args, int *count);
void	ft_print_pointer(unsigned long ptr, int *count);
void	ft_putnbr_count_int(int n, int *count);
void	ft_putnbr_count_long(long n, int *count);
void	ft_putnbr_hexa_lowercase(long n, int *count);
void	ft_putnbr_hexa_uppercase(long n, int *count);
void	ft_putchar(char c);

#endif