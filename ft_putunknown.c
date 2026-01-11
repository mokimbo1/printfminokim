/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunknown.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-11 20:09:18 by minokim           #+#    #+#             */
/*   Updated: 2026-01-11 20:09:18 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunknown(char c)
{
	int	result;
	int	tt;

	tt = 0;
	result = write(1, "%%", 1);
	if (result == -1)
		return (-1);
	tt += result;
	result = write(1, &c, 1);
	if (result == -1)
		return (-1);
	tt += result;
	return (tt);
}
