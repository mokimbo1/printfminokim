/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdig.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 21:23:32 by minokim           #+#    #+#             */
/*   Updated: 2025/12/22 19:43:21 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	writo(int n, int position, int is_negative)
{
	int	dig;
	int counter;
	int temp;
	
	counter = 0;

	while (position >= 1)
	{
		dig = n / position;
		if (is_negative)
			dig = dig * -1;
		temp = ft_putchar(dig + '0');
		if (temp == -1)
			return(-1);
		counter += temp;
		if (is_negative)
			n = n + (dig * position);
		else
			n = n - (dig * position);
		position = position / 10;
	}
	return(counter);
}

int	ft_putdig(int n)
{
	int	size;
	int	is_negative;
	int counter;
	int temp;

	counter = 0;

	size = 1000000000;
	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	while (n / size == 0 && size > 1)
		size = size / 10;
	if (is_negative)
	{
		temp = ft_putchar('-');
		if(temp == -1)
			return(-1);
		counter += temp;
	}
	temp = writo(n, size, is_negative);
	if(temp == -1)
		return(-1);
	counter += temp;
	return(counter);
}
