/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:25:31 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/30 12:58:36 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int main()
{
	char dest[] = "ronald";
	char src[] = "xo";
	unsigned int taille;
	int i;

	taille = 2;
	
	printf("avant :%s, %s \n",dest,src);

	ft_strncpy(dest, src, taille);

	printf("apres :%s < %s",dest, src);
}
*/
