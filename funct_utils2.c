/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   funct_utils2.c									 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mbendidi <mbendidi@student.42lausanne.c	+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/10/10 18:41:43 by mbendidi		  #+#	#+#			 */
/*   Updated: 2024/10/10 18:41:43 by mbendidi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex_upper(va_list ap)
{
	return (ft_putnbr_base_upper(va_arg(ap, unsigned int), 16));
}

int	print_char(va_list ap)
{
	return (ft_putchar(va_arg(ap, int)));
}

int	print_str(va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	if (!str)
		return (ft_putstr("(null)"));
	return (ft_putstr(str));
}

int	print_int(va_list ap)
{
	return (ft_putnbr((long)(va_arg(ap, int)), 10));
}

int	print_unsigned(va_list ap)
{
	return (ft_putnbr((unsigned long)(va_arg(ap, unsigned int)), 10));
}
