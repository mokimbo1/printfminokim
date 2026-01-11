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
	else if (*(n + 1) == 'c')
		len += ft_putchar((char)va_arg(args, int));
	else if (*(n + 1) == 's')
		len += ft_putstring(va_arg(args, char *));
	else if (*(n + 1) == 'p')
		len += ft_putpoint(va_arg(args, size_t));
	else if (*(n + 1) == 'u')
		len += ft_putud(va_arg(args, unsigned int));
	else if (*(n + 1) == 'x')
		len += ft_puthex(va_arg(args, unsigned int));
	else if (*(n + 1) == 'X')
		len += ft_puthex_upper(va_arg(args, unsigned int));
	else if (*(n + 1) == '%')
		len += ft_putper();
	else
		len += ft_putunknown(*(n + 1));
	return (len);
}

int	ft_printf(const char *n, ...)
{
	va_list	args;
	int		counter;
	int		temp;

	va_start(args, n);
	counter = 0;
	if (n == NULL)
		return (-1);
	while (*n)
	{
		temp = 0;
		if (*n == '%' && *(n + 1) != '\0')
			temp = ft_typeinspector(n++, args);
		else
			temp = write(1, n, 1);
		n++;
		if (temp == -1)
			return (-1);
		counter += temp;
	}
	va_end(args);
	return (counter);
}
