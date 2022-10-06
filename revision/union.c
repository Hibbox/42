/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 01:14:48 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/06 03:45:53 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	check_doubles(char *str, char c, int pos)
{
	int 	i;

	i = 0;
	while (i < pos)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	check_string(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i])
	{
		if (! check_doubles(s1, s1[i], i))
			write(1, &s1[i], 1);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (! check_string(s1, s2[i]))
		{
			if (! check_doubles(s2, s2[i], i))
				write(1, &s2[i], 1);	
		}
		i++;
	}
}


int main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
}

/*
int main(int ac, char **av)
{
	int	i;
	int	contenue;
	int	check;
	char	tmp[ft_strlen(av[1]) + ft_strlen(av[2])];

	j = -1;
	i = 0;
	if (ac == 3)
	{
		while(av[1][i])
		{
			check = 0;
			while (check != current)
			{
				if (tmp[check] == av[1][i])
					break;
				++check;
			}
			if(check == current)
			{
				write(1, &av[1][i], strlen(av[1][i]));
				tmp[current] = av[1][i];
				++current;

				//printf("%s\n", av[1]);
			break;
		}
		return (0);
	}
}*/
