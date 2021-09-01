/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 14:33:14 by mkarim            #+#    #+#             */
/*   Updated: 2021/06/25 09:58:39 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	n[3];

	n[0] = '0';
	while (n[0] < '8')
	{
		n[1] = n[0] + 1;
		while (n[1] < '9')
		{
			n[2] = n[1] + 1;
			while (n[2] <= '9')
			{
				ft_putchar(n[0]);
				ft_putchar(n[1]);
				ft_putchar(n[2]);
				if (n[0] < '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}
