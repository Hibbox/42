/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:15:59 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/21 17:56:16 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int    ft_str_is_numeric(char *str)
{
        unsigned int    i;

        i = 0;
        while(str[i] != '\0')
        {
               if(str[i] >= '0' && str[i] <= '9')
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
        char src[] = "0123456789iaa";

        printf("%d", ft_str_is_numeric(src));
        
}
*/
