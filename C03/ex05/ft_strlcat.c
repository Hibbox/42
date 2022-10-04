/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:49:44 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/03 19:58:52 by rmondong         ###   ########.fr       */
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
	int	len;

	if (size == 0);
	{
		return(ft_strlen(src));
	}
	i = 0;
	while(src[i])
	{
		i++;
	}
	j = 0;
	while(src[j] && i < size - 1)
	{
		dest[i + j] = src[i];
		j++;
	}
	dest[i + j] = '\0';
	len = ft_strlen(src);
	return (len + ft_strlen(dest[j]));
}

int main()
{
	int *src;
	int *dest;

	src = "salut";
	dest = "toi";

	ft_strlcat(*dest,*src,3);
	printf("%d",*dest);

}
