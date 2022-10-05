/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:24:13 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/05 17:59:19 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if(n == 0)
		return(0);
	while (s1[i] == s2[i] && (s1[i] || s2[i]) && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int     main()
{
        char    str[] = "ui";
        char    str2[] = "rrrrrrg";

        printf("%d\n",ft_strncmp(str,str2,0));
	printf("%d",strncmp(str,str2,0));
}

