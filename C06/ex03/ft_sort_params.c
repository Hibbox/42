/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:00:45 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/28 21:45:37 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
}

int	ft_strcmp(char*s1, char*s2)
{
	int		i;

	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	sort_argv(int argc, char **argv)
{
	char*temp;
	int	j;
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
				j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	int i;

	i = 1;
	sort_argv(argc, argv);
	while (i < argc)
	{
		
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
	
	/*printf ("Nombre d'argument %d \n", argc);
	printf("Valeur de l'argument 1 %s \n", argv[1][i]);

	char *str = argv[1];
	printf("%s\n", str);
	return(0);*/
	// argc - 1 veux dire qu on veux faire le max -1 pour car argv commence a 0// 

