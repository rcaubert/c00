/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 20:19:23 by raubert           #+#    #+#             */
/*   Updated: 2019/08/01 17:02:40 by raubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z;
	int		a;

	z = 122;
	a = 0;
	while (a < 26)
	{
		write(1, &z, 1);
		z--;
		a++;
	}
}
