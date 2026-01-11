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
	int	temp;
	int	i;

	if (ptr == 0)
		return (ft_put_null_char(0));
	temp = write(1, "0x", 2);
	if (temp == -1)
		return (-1);
	i = temp;
	temp = ft_puthex(ptr);
	if (temp == -1)
		return (-1);
	i += temp;
	return (i);
}
