/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:24:13 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/22 21:35:57 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] && s2[i]) && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int     main()
{
        char    str[] = "rrr";
        char    str2[] = "rkr";

        printf("%d",ft_strncmp(str,str2,2));
}
