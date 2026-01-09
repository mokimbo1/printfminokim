/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_null_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 22:03:13 by minokim           #+#    #+#             */
/*   Updated: 2026/01/08 21:17:03 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_null_char(long c)
{
	if (c == 1)
	{
		write(1, "(null)", 6);
		return (6);
	}
	if (c == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	return (0);
}
