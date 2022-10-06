/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 00:48:33 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/30 14:06:20 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
/*
int	ft_strlen(char *str)
{
	int i;

	i = 0;

	while(str[i])
	{
		i++;
	}
	return (i);
}

int	main(int ac, char **argv)
{

	char chaine[] = "qng";
	int len = ft_strlen(chaine);
	printf("%d", len);
}
******************************************************************************************/
/***********************************************************************************
void	swap(int *a, int *b)
{

	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int 	main()
{
	int u;
	int p;

	u = 52;
	p = 3;
	printf("avant %d %d\n", u, p);
	swap(&u,&p);
	printf("%d %d", u, p);
}
**************************/
/**************************
char	*ft_rev_print(char *str)

{
	int	i;
	i = 0;
	while(str[i])
		i++;

	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (0);
}
	
int 	main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while(av[1][i])
		{
			i++;
		}
		printf("%s",ft_rev_print(av[1]));
	}
	return (0);
}
************************************************************/
/***********************************************************
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	Result;

	i = 0;
	sign = 0;
	Result = 0;
	while (str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
	{
			i++;
	}
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if ( str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		Result = Result * 10 + str[i] - '0';
		i++;
	}
	if (sign % 2 == 1)
		return (-Result);
	return (Result);
	
}

int	main(int ac, char **av)
{
	if(ac == 2)
	{
		
		printf("%d",ft_atoi(av[1]));
	}
	return (0);
}
************************************************************/


int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	result = 0;
	sign = 0;

	while(str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
	{
		i++;
	}
	while(str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if(str[i] == '-')
			sign++;
		i++;
	}
	while(str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if(sign % 2 == 1)
		return (-result);
	return (result);
}

int	main(int ac, char **av)
{
	if(ac == 2)
	{
		
		printf("%d",ft_atoi(av[1]));
	}
	return (0);
}
