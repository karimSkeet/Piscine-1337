/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:52:10 by mkarim            #+#    #+#             */
/*   Updated: 2021/07/07 07:15:41 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (power < 0)
		return (0);
	else if ((nb == 0 && power == 0) || power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}
