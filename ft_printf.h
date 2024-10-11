/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_prinft.h										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mbendidi <mbendidi@student.42lausanne.c	+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/10/10 18:29:15 by mbendidi		  #+#	#+#			 */
/*   Updated: 2024/10/10 18:29:15 by mbendidi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *input, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(long n, int base);
int	ft_putnbr_unsigned(unsigned long n, int base);
int	ft_putnbr_base_upper(unsigned long n, int base);
int	print_hex_upper(va_list ap);
int	print_char(va_list ap);
int	print_str(va_list ap);
int	print_int(va_list ap);
int	print_unsigned(va_list ap);

#endif
