/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:49:44 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/04 15:16:43 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int	lensrc;
	int	lendest;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);

	if (size <= lendest)
		return (size + lensrc);
	i = 0;
	while (src[i] && lendest + i < size - 1)
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (i + lendest);
}
/*
int main()
{
	char *src;
	int *dest;

	dest = malloc(sizeof(int) * 10);
	dest[0];
	dest[1]
	src = "salut";
	dest = "to\0iii";
	//dest[2] = 'b';
	ft_strlcat(dest,"123",5);
	printf("%s",dest);

}*/
