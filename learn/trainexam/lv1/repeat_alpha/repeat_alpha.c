/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 09:44:07 by mkarim            #+#    #+#             */
/*   Updated: 2021/07/09 10:16:01 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rep(char c, int n)
{
	int i;
	
	i = 0;
	while (i < n)
	{
		write(1, &c, 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int	i;
	int rep;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				rep = argv[1][i] - 96;
				ft_rep(argv[1][i], rep);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				rep = argv[1][i] - 64;
				ft_rep(argv[1][i], rep);
			}
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
