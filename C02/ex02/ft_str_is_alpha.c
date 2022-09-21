/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:51:31 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/21 16:03:28 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>

int    ft_str_is_alpha(char *str)
{
        unsigned int	i;

        i = 0;

        while(str[i] != '\0')
        {
               if( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
	       {
		       i++;
	       }
	       else
		       return(0);
 	}
	return (1);	

}
/*
int main()
{
        char src[] = "ronaldDDD";

        printf("%d", ft_str_is_alpha(src));
	
}
*/
