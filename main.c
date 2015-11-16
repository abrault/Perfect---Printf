/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 13:42:11 by abrault           #+#    #+#             */
/*   Updated: 2015/11/16 15:49:11 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>
#include <stddef.h>

int main()
{
	int a = 0;
	int b = 0;

	a = printf("Ceci est un message simple.");
	printf("(%d)\n", a);
	b = ft_printf("Ceci est un message simple.");
	printf("(%d)\n", b);

	printf("\n");

	a = printf("s - Bonjour je suis %s.", "Pierre");
	printf("(%d)\n", a);
	b = ft_printf("s - Bonjour je suis %s.", "Pierre");
	printf("(%d)\n", b);

	printf("\n");

	a = printf("d - J'ai %d ans.", 1378);
	printf("(%d)\n", a);
	b = ft_printf("d - J'ai %d ans.", 1378);
	printf("(%d)\n", b);

	printf("\n");

	a = printf("i - J'ai %i ans.", -913);
	printf("(%d)\n", a);
	b = ft_printf("i - J'ai %i ans.", -913);
	printf("(%d)\n", b);

	printf("\n");

	a = printf("U - J'ai %U ans.", 65000);
	printf("(%d)\n", a);
	b = ft_printf("U - J'ai %U ans.", 65000);
	printf("(%d)\n", b);



	return (0);
}
