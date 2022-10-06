/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:49:44 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/06 14:48:40 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{	
	unsigned int	i;
	unsigned int	len_src;
	unsigned int	len_dest;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dest)
		return (size + len_src);
	i = 0;
	while (src[i] && len_dest + 1 <= size)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (i + len_dest);
}
/*
int main()
{
	char src[] = "salut";
	char dest[10] = "toi";

	//dest = malloc(sizeof(int) * 10);
	//dest[2] = 'b';
	ft_strlcat(dest,src,5);
	printf("%s",dest);

}
*/
