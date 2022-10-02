/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 00:37:08 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/03 00:37:31 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	n = 0;
	while (src[n])
	{
		++n;
	}
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (n);
}
/*
int main()
{
        char    src[6]= "ronald";
        char    dest[100]="iii";

        printf("%s %s,", src, dest);
        ft_strlcpy(dest,src,4);
        printf("%s  %s,",src, dest);
}
*/
