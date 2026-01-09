/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 18:46:12 by minokim           #+#    #+#             */
/*   Updated: 2026/01/08 21:19:23 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_typeinspector(const char *n, va_list args)
{
	int	len;

	len = 0;
	if (*(n + 1) == 'd' || *(n + 1) == 'i')
		len += ft_putdig(va_arg(args, int));
	if (*(n + 1) == 'c')
		len += ft_putchar((char)va_arg(args, int));
	if (*(n + 1) == 's')
		len += ft_putstring(va_arg(args, char *));
	if (*(n + 1) == 'p')
		len += ft_putpoint(va_arg(args, size_t));
	if (*(n + 1) == 'u')
		len += ft_putud(va_arg(args, unsigned int));
	if (*(n + 1) == 'x')
		len += ft_puthex(va_arg(args, unsigned int));
	if (*(n + 1) == 'X')
		len += ft_puthex_upper(va_arg(args, unsigned int));
	if (*(n + 1) == '%')
		len += ft_putper();
	return (len);
}

int	ft_printf(const char *n, ...)
{
	va_list	args;
	long	counter;

	va_start(args, n);
	counter = 0;
	if (n == NULL)
		return (-1);
	while (*n)
	{
		if (*n == '%')
		{
			counter += ft_typeinspector(n, args);
			n++;
			if (!*n)
				return (1);
		}
		else
			counter += write(1, n, 1);
		n++;
	}
	va_end(args);
	return (counter);
}
