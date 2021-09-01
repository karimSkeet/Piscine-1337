/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 08:40:25 by mkarim            #+#    #+#             */
/*   Updated: 2021/06/25 09:20:53 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		nbrdigits;
	int		tab[10];
	int		i;
	int		n;

	n = nb;
	nbrdigits = 0;
	while (n != 0)
	{
		n = n / 10;
		nbrdigits++;
	}
	i = -1;
	while (++i < nbrdigits)
	{
		tab[9 - i] = nb % 10;
		nb = nb / 10;
	}
	i = -1;
	while (++i < nbrdigits)
	{
		ft_putchar(tab[10 - nbrdigits + i] + 48);
	}
}
