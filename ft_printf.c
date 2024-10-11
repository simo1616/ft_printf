/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_printf.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mbendidi <mbendidi@student.42lausanne.c	+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/10/10 18:29:38 by mbendidi		  #+#	#+#			 */
/*   Updated: 2024/10/10 18:29:38 by mbendidi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(va_list ap)
{
	return (ft_putnbr((unsigned long)(va_arg(ap, unsigned int)), 16));
}

int	print_pointer(va_list ap)
{
	void	*ptr;

	ptr = va_arg(ap, void *);
	if (!ptr)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x") + ft_putnbr_unsigned((unsigned long)ptr, 16));
}

int	print_input(char found, va_list ap)
{
	if (found == 'c')
		return (print_char(ap));
	if (found == 's')
		return (print_str(ap));
	if (found == 'd' || found == 'i')
		return (print_int(ap));
	if (found == 'u')
		return (print_unsigned(ap));
	if (found == 'x')
		return (print_hex(ap));
	if (found == 'X')
		return (print_hex_upper(ap));
	if (found == 'p')
		return (print_pointer(ap));
	if (found == '%')
		return (ft_putchar('%'));
	return (write(1, &found, 1));
}

int	ft_printf(const char *input, ...)
{
	va_list	ap;
	int		count;
	int		i;

	va_start(ap, input);
	count = 0;
	i = 0;
	while (input[i])
	{
		if (input[i] == '%' && input[i + 1])
		{
			count += print_input(input[i + 1], ap);
			i++;
		}
		else if (input[i] == '%' && !input[i + 1])
			break ;
		else
			count += write(1, &input[i], 1);
		i++;
	}
	va_end(ap);
	return (count);
}
