/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:32:11 by mkarim            #+#    #+#             */
/*   Updated: 2021/07/04 06:38:12 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	int	fb1;
	int	fb2;

	if (index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	fb1 = ft_fibonacci(index - 1);
	fb2 = ft_fibonacci(index - 2);
	return (fb1 + fb2);
}
