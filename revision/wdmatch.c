/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:22:34 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/06 00:57:15 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	wd_check( int ac, char **av)
{
	int	i;
	int	j;

}
int main(int ac, char **av)

{
	int	i;
	int	j;
	
	i = 0;
	j = -1;
	if (ac == 3)
	{
		while(av[2][++j])
		{
			if (av[1][i] == av[2][j])
				i++;
			if(av[1][i] == 0)
			{
			       printf("%s\n", av[1]);
			       break;
			}

		}
		return (0);
	}
	write(1,"\n",1);
}
