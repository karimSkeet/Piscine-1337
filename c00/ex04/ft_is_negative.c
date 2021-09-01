/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 13:02:46 by mkarim            #+#    #+#             */
/*   Updated: 2021/06/25 12:49:10 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	result;

	if (n < 0)
	{
		result = 'N';
		write(1, &result, 1);
	}
	else
	{
		result = 'P';
		write(1, &result, 1);
	}
}
int main(){
	ft_is_negative(1337);
}
