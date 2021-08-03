/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factoriel.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:32:18 by mkarim            #+#    #+#             */
/*   Updated: 2021/07/04 06:34:49 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factoriel(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		nb *= ft_recursive_factoriel(nb - 1);
		return (nb);
	}
	return (0);
}
