/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:14:12 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/20 12:22:38 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

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

int	ft_strlen(char *str)
{
	int compteur;

	compteur = 0;

	while(str[compteur] != '\0')
	{
		compteur++;
	}
	ft_putchar(str[compteur]);
	return compteur;

}

int main()
{
	char *chaine;

	chaine = "toto";
	printf("%d", ft_strlen(chaine));
}

