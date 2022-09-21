/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 23:22:28 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/20 10:44:48 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)

{
        write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int i;

	i = 0;	
	while(str[i]) // systeme de booleen a vrai qui dit tant que il a pas parcouru toute la chaine de caractere affiche tout
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main()
{
	char *chaine;

	chaine = "toto";
	
	ft_putstr(chaine);
}
