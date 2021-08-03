/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 07:03:04 by mkarim            #+#    #+#             */
/*   Updated: 2021/07/09 07:38:59 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_putchar(char a)
{
	write(1, &a, 1);
}
int main(int argc, char **argv)
{
	int i;
	int d;

	d = 1;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a' && d == 1)
			{
				ft_putchar('a');
				write(1, "\n", 1);
				d++;
			}
			else if (argv[1][i] != '\0' && argv[1][i + 1] == '\0' && d == 1)
				write(1, "\n", 1);
			i++;
		}
	}
	else
	{
		ft_putchar('a');
		write(1, "\n", 1);
	}
}
