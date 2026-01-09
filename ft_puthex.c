/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 22:13:42 by minokim           #+#    #+#             */
/*   Updated: 2025/12/22 19:59:40 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(size_t n)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_puthex(n / 16);
	if ((n % 16) < 10)
		len += ft_putchar((n % 16) + '0');
	else
		len += ft_putchar((n % 16) - 10 + 'a');
	return (len);
}
