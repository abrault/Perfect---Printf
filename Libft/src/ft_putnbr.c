/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 14:53:49 by abrault           #+#    #+#             */
/*   Updated: 2015/11/16 15:46:53 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>

int		ft_putnbr(int n)
{
	int	i = 0;

	if (n < 0)
	{
		i++;
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		i += ft_putnbr(n / 10);
		i += ft_putnbr(n % 10);
	}
	else
		return (i + ft_putchar(n + 48));
	return (i);
}

int		ft_putnbrU(unsigned int n)
{
	int	i = 0;

	if (n >= 10)
	{
		i += ft_putnbr(n / 10);
		i += ft_putnbr(n % 10);
	}
	else
		return (i + ft_putchar(n + 48));
	return (i);
}
