/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcapitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:40:55 by mkarim            #+#    #+#             */
/*   Updated: 2021/06/29 16:15:34 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	ft_lowcase(char	*str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
		{
			str[j] = str[j] + 32;
		}
		j++;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_lowcase(str);
	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
