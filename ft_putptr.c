/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:50:38 by kevwang           #+#    #+#             */
/*   Updated: 2025/05/05 14:50:40 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_print(unsigned long long n, char format)
{
	if (n > 15)
	{
		ft_putptr_print(n / 16, format);
	}
	if (format == 'x')
		write(1, &"0123456789abcdef"[n % 16], 1);
	else
		write(1, &"0123456789ABCDEF"[n % 16], 1);
}

int	ft_putptr(unsigned long long n)
{
	int	count;

	count = 1;
	ft_putptr_print(n, 'x');
	while (n > 15)
	{
		count++;
		n = n / 16;
	}
	return (count);
}

int	ft_putpointer(void *s)
{
	long long	test;

	if (!s)
		return (ft_putstr("(nil)"));
	test = (unsigned long long)(intptr_t)s;
	ft_putstr("0x");
	return (ft_putptr(test) + 2);
}
