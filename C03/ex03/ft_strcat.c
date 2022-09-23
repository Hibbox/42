/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 00:16:28 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/23 02:16:09 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int 	i;
	int	n;

	i = 0;
	n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while(src[n] != '\0')
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i+n]= '\0';

}

int main()
{
	char	src[]="ffff";
	char	dest[100]="iiiii";

	printf("%s,", dest);
	ft_strcat(dest,src);
	printf("%s,", dest);
}
