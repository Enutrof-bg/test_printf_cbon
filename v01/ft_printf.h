/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 12:27:19 by kevwang           #+#    #+#             */
/*   Updated: 2025/05/02 12:27:20 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <aio.h>
# include <limits.h>

int	ft_printf(const char *str, ...);
int	ft_putunsigned(unsigned int n);
int	ft_putpointer(void *s);
int	ft_putnbr(signed long long nb);
int	ft_puthexa_lower(unsigned int n);
int	ft_puthexa_upper(unsigned int n);
int	ft_putstr(char *str);
int	ft_putchar(char c);

#endif
