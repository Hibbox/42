/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:41:55 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/21 17:52:17 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_str_is_uppercase(char *str)
{
        unsigned int    i;

        i = 0;
        while(str[i] != '\0')
        {
               if(str[i] >= 'A' && str[i] <= 'Z' )
               {
                       i++;
               }
               else
                       return(0);
        }
        return (1);

}

int main()
{
        char src[] = "";

        printf("%d", ft_str_is_uppercase(src));

}



