/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 00:14:14 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/07 00:28:24 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	n = 0;
	if (n == 0)
		return (0);
	n = 0;
	while (dest[n] != '\0')
		n++;
	while (src[i] && i < nb)
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
        char    dest[]="iiiii";

        ft_strncat(dest,src,1);
        printf("%s\n", dest);

	strncat(dest,src,1);
        printf("%s", dest);
}
*/
