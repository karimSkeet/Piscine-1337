/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:36:03 by mkarim            #+#    #+#             */
/*   Updated: 2021/07/04 17:07:47 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isspace(char n)
{
	if (n == ' ' || n == '\n' || n == '\t' || n == '\f'
		|| n == '\r' || n == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	s;

	i = 0;
	s = 1;
	res = 0;
	while (str[i] != '\0' && ft_isspace(str[i]) == 1)
		i++;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * s);
}
