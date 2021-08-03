/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next-prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:55:19 by mkarim            #+#    #+#             */
/*   Updated: 2021/07/04 06:41:50 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	d;
	int	i;

	d = 0;
	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	else if (nb > 1)
	{
		while (i > 1 && i < nb)
		{
			if (nb % i == 0)
				d++;
			i++;
		}
	}
	if (d == 0)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	while (nb)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		else
			nb++;
	}
	return (0);
}
