/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:34:41 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/07 00:29:25 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			else
				return (NULL);
			j++;
		}
		i++;
	}
	return (0);
}

int main()
{
	char	heystack[]="recall";
	char	needle[]="blabla";
	char	*findit;

	findit = ft_strstr(heystack, needle);
	printf("%s\n", findit);
	return (0);
}
