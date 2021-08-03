/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 16:52:14 by mkarim            #+#    #+#             */
/*   Updated: 2021/07/08 15:37:10 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stddef.h>
#include<stdio.h>
int	*ft_range(int min, int max)
{
	int	size;
	int i;
	int *p;

	if (min >= max)
		return (NULL);
	size = max - min + 1;
	p = malloc(size* sizeof(int));
	i = 0;
	while (min < max)
	{
		*(p + i) = min++;
		i++;
	}
	return (p);
}

int main(void)
{
	int *p;

	p = ft_range(14, 14);
	int i = 0;
	while (i < 14 - -12)
	{
		printf("%d\n", *(p + i));
		i++;
	}
}
