/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:33:09 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/29 20:51:11 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int **tab_sol;


void	ft_putchar(char c)
{
	write(1,&c,1);
}

int	ft_check_line(int k, int **tab, int line)
{
	int	j;

	j = 0;

	while( j < 4 )
	{
		if( tab[line][j] == k)
			return (0);
		j++;
	}
	return (1);

}
int    ft_check_col(int k, int **tab, int col)
{
        int     j;      

        j = 0;

        while( j < 4 )
        {
                if( tab[j][col] == k)
                        return (0);
                j++;
        }
        return (1);
}

int     ft_is_finish(int **tab);

int	ft_valid_is_good( int **tab, int position)
{
	int j;
	int i;
	int backtracking;

	i = position / 4;
	j = position % 4;
	backtracking = 1;
	
	if(position == 16)
		return (ft_is_finish(tab));
	if(tab[i][j] != 0)
		return (ft_valid_is_good( tab, position + 1));	
	while(backtracking < 5 )
	{
		if(ft_check_line(backtracking, tab, i) && ft_check_col(backtracking, tab, j))
		{
			tab[i][j] = backtracking;
			if(ft_valid_is_good(tab, position + 1))
					return (1);
		}
		backtracking++;
	}
	tab[i][j] = 0;
	return (0);
}

int	ft_is_finish(int **tab)
{
	int	tab_sol_i;
	int	tab_sol_j;
	int	tab_i;
	int	tab_j;
	int	vision;
	int	temp;

	tab_sol_i = 0;
        tab_sol_j = 0;
	tab_i = 0;
	tab_j = 0;

	while(tab_sol_i < 4)
	{
		while(tab_sol_j < 4 )
		{
			vision = 1;
			if(tab_sol_i == 0)
			{
			       	tab_i = 0;
				temp = tab[tab_i][tab_j];

				while(tab_i < 4)
				{
					if (temp < tab[tab_i][tab_j])
					{
						temp = tab[tab_i][tab_j];
						vision++;
					}
					tab_i++;
				}
				if (vision != tab_sol[tab_sol_i][tab_sol_j])
					return (0);
				tab_j++;
			}
				
			if(tab_sol_i == 1)
                        {
				tab_i = 3;
                                temp = tab[tab_i][tab_j];

                                while(tab_i > -1)
                                {
                                        if (temp < tab[tab_i][tab_j])
                                        {
                                                temp = tab[tab_i][tab_j];
                                                vision++;
                                        }
                                        tab_i--;
                                }
                                if (vision != tab_sol[tab_sol_i][tab_sol_j])
                                        return (0);
                                tab_j++;
                        }

			if(tab_sol_i == 2)
                        {
				tab_j = 0;
                                temp = tab[tab_i][tab_j];

                                while(tab_j < 4)
                                {
                                        if (temp < tab[tab_i][tab_j])
                                        {
                                                temp = tab[tab_i][tab_j];
                                                vision++;
                                        }
                                        tab_j++;
                                }
                                if (vision != tab_sol[tab_sol_i][tab_sol_j])
                                        return (0);
                                tab_i++;
                        }

			if(tab_sol_i == 3)
                        {
                                tab_j = 3;
                                temp = tab[tab_i][tab_j];

                                while(tab_j > -1)
                                {
                                        if (temp < tab[tab_i][tab_j])
                                        {
                                                temp = tab[tab_i][tab_j];
                                                vision++;
                                        }
                                        tab_j--;
                                }
                                if (vision != tab_sol[tab_sol_i][tab_sol_j])
                                        return (0);
                                tab_i++;
                        }
			tab_sol_j++;
		}
		tab_sol_i++;
		tab_sol_j = 0;
		if (tab_sol_i == 1)
			tab_j = 0;
		if (tab_sol_i >= 2)
			tab_i = 0;
	}
	return (1);
}

int	**ft_tab_sol(char *str)
{
	int	i;
	int	j;
	int	**tab;
	int	k;
	
	k = 0;	
	tab = malloc(sizeof(int *) * 4);
	j = 0;
	i = 0;

	while(i < 4)
	{
		tab[i] = malloc(sizeof(int) * 4);
		while(j < 4)
                {
                        tab[i][j] = str[k] - '0';
                        j++;
                        k = k + 2;
               	}
		i++;
		j = 0;
	}

	return (tab);
}

void    ft_print_tab(int **tab)
{
        int     i;
        int     j;

        i = 0;
        while (i < 4)
        {
                j = 0;
                while (j < 4)
                {
                        ft_putchar(tab[i][j] + '0');
                        if (j != 3)
                                ft_putchar(' ');
                        j++;
                }
                ft_putchar('\n');
                i++;
        }
}


int     main(int ac, char **av)
{
	(void) ac;

        int **tab;
        int i = 0;

        tab_sol = ft_tab_sol(av[1]);
        tab = malloc(4 * sizeof(int *));
        while(i < 4)
        {
                tab[i] = malloc(4 * sizeof(int));
                i++;
        }
        --i;
        while (!ft_valid_is_good(tab, 0)){}
        ft_print_tab(tab);
        while(i > -1)
        {
                tab[i] = malloc(4 * sizeof(int));
                free (tab[i]);
                i--;
        }
        free(tab);
	free(tab_sol);
        return (0);
}


	/* a 1 2 3 2 a */
	/* 1 x x x x 2 */
	/* 2 x x x x 3 */
	/* 3 x x x x 2 */
	/* 3 x x x x 1 */
	/* a 3 3 2 1 a */
