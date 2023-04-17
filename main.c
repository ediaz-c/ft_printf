#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	len;

	len = 0;
	char texto[] = "hola";
	len = ft_printf("hola %s\n", texto);
	printf("%x", -1);
	// ft_printf("%d", len);
}
