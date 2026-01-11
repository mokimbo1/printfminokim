/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:00:26 by minokim           #+#    #+#             */
/*   Updated: 2026/01/08 21:18:27 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_putdig(int n);
int	ft_putchar(char c);
int	ft_putstring(char *s);
int	ft_putunknown(char c);
int	ft_putpoint(size_t ptr);
int	ft_putud(unsigned int n);
int	ft_puthex(unsigned int  n);
int	ft_puthex_upper(unsigned int  n);
int	ft_putper(void);
int	ft_put_null_char(long c);
int	ft_printf(const char *n, ...);

#endif
