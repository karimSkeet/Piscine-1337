/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:55:19 by mkarim            #+#    #+#             */
/*   Updated: 2021/07/07 12:22:55 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	d;
	int	i;

	d = 0;
	i = 2;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb > 2)
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
	if (nb <= 2)
		return (2);
	else if (nb >= 2147483643)
		return (2147483647);
	while (nb <= 2147483647 && ft_is_prime(nb) == 0)
		nb ++;
	return (nb);
}
