/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 00:14:14 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/05 12:53:36 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	n = 0;
	while (dest[n] != '\0')
		n++;
	i = 0;
	while ((dest[i] != '\0' && dest[n] != '\0') && i < nb - 1)
	{	
		dest[n + i] = src[i];
		i++;
	}
	dest[i + n] = '\0';
	return (dest);
}
/*
int main()
{
        char    src[]="ffff";
        char    dest[100]="iiiii";

        printf("%s,", dest);
        ft_strncat(dest,src,2);
        printf("%s,", dest);
}
*/
