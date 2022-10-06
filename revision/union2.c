/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 03:50:05 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/06 04:28:52 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_doublon(char *str, char c, int pos) // check d'une chaine caractere par caractere 
{
	int	i;

	i = 0;
	while( i < pos)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return 0;
}

int	check_string(char *str, char c) // check dans chaque chaine
{
	int	i;

	i = 0;
	while(str[i])
	{
		if ( c == str[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i])
	{
		if(! check_doublon(s1,s1[i], i))
			write(1, &s1[i],1);
		i++;
	}
	i=0;
	while (s2[i])
	{
		if (! check_string(s1, s2[i]))
				if(! check_doublon(s2, s2[i], i))
					write(1, &s2[i], 1);
				i++;
	}
}

int main(int ac, char **av)
{

if(ac == 3)
	ft_union(av[1], av[2]);
}
