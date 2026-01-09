/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putud.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 21:13:16 by minokim           #+#    #+#             */
/*   Updated: 2026/01/08 21:19:17 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putud(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
		len += ft_putud(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}
