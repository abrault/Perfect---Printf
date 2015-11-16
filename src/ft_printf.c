/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 10:42:12 by abrault           #+#    #+#             */
/*   Updated: 2015/11/16 15:48:48 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_printf.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int	search_option(char c, va_list *ap)
{
	switch (c)
	{
		case 's':
			return (ft_putstr(va_arg(*ap, char*)));
			break;
		case 'd':
			return (ft_putnbr(va_arg(*ap, int)));
			break;
		case 'D':
			return (ft_putnbr(va_arg(*ap, int)));
			break;
		case 'i':
			return (ft_putnbr(va_arg(*ap, int)));
			break;
		case '%':
			return (ft_putchar(va_arg(*ap, int)));
			break;
		case 'U':
			return (ft_putchar(va_arg(*ap, unsigned int)));
			break;
		default:
			break;
	}
	return (0);
}

int	ft_printf(const char* format, ...)
{
	int		n = 0;
	int		i = 0;
	va_list	ap;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && (i++))
			n += search_option(format[i], &ap);
		else
			n += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (n);
}
