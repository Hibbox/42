/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:24:13 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/05 10:49:50 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] && s2[i]) && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int     main()
{
        char    str[] = "rrrrrrrrrrrrrrrrr";
        char    str2[] = "rrrrrrrrrrrrrrrg";

        printf("%d",ft_strncmp(str,str2,10));
}
*/
