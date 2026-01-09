/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:01:02 by minokim           #+#    #+#             */
/*   Updated: 2026/01/08 21:19:15 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstring(char *s)
{
	int counter;

	counter = 0;
	if (s == NULL)
		return (write(1, "(null)", 6));
	while(s[counter] != '\0')
	{
		ft_putchar(s[counter]);
		counter++;
	}
	return (counter);
}
