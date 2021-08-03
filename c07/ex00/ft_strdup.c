/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:16:37 by mkarim            #+#    #+#             */
/*   Updated: 2021/07/07 16:02:43 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 1;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int size;
	int	i;
	char *p;

	size = ft_strlen(src);
	p = malloc(size * sizeof(char));
	i = 0;
	while (src[i])
	{
		*(p + i) = *(src + i);
		i++;
	}
	p[i] = '\0';
	return (p);
}

int main()
{
	char s[] = "hello from 1337";
	char *p;

	p = ft_strdup(s);
	printf("%s\n", p);
	return (0);
}
