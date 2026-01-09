#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main()
{
	printf("; %d: \n", printf("%p : %p", LONG_MIN, LONG_MAX));
	printf("; %d: \n", ft_printf("%p : %p", LONG_MIN, LONG_MAX));
}