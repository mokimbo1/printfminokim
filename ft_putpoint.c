/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:43:24 by minokim           #+#    #+#             */
/*   Updated: 2026/01/08 21:22:41 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpoint(size_t ptr)
{
	int i;

	if (ptr == 0)
		return (ft_put_null_char(0));
	write(1, "0x", 2);
	i = ft_puthex(ptr);
	i += 2;
	return (i);
}
