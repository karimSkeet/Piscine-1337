/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 18:30:09 by mkarim            #+#    #+#             */
/*   Updated: 2021/06/25 09:16:22 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = -1;
	j = -1;
	while (++i < 100)
	{
		j = i;
		while (++j < 100)
		{
			ft_putchar(i / 10 + 48 );
			ft_putchar(i % 10 + 48);
			ft_putchar(' ');
			ft_putchar(j / 10 + 48);
			ft_putchar(j % 10 + 48);
			if (i < 98 )
				ft_putchar(',');
		}
	}
}
