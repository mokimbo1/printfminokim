/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 19:57:27 by minokim           #+#    #+#             */
/*   Updated: 2026/01/08 21:19:07 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_upper(size_t n)
{
	int	temp;
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_puthex_upper(n / 16);
	if ((n % 16) < 10)
		temp = ft_putchar((n % 16) + '0');
	else
		temp = ft_putchar((n % 16) - 10 + 'A');
	if (temp == -1)
		return (-1);
	len += temp;
	return (len);
}
