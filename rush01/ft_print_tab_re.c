/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab_re.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:34:44 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/27 15:28:21 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_finish(int **tab);

void	ft_putchar(char c)
{
	write(1,&c,1);
}

int	ft_check_line(int k, int **tab, int line)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (tab[line][j] == k)
			return (0);
		j++;
	}
	return (1);
}

int	ft_check_col(int k, int **tab, int col)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (tab[col][j])
		{
			return (0);
			j++;

		}
	}
}

int	ft_valid_is_good(int **tab, int position)
{
	int	j;
	int	i;
	int	backtracking;

	i = position / 4;
	j = postion % 4;
	backtracking = 1;
	if(position == 16)
		return (ft_is_finsih(tab));
	if(tab[i][j] != 0)
		return (ft_valid_is_good);
	while(bactracking < 5 )
	{
		if(ft_check_line(backtracking, tab, i) && ft_check_col(backtracking, tab, j))
		{
			tab[i][j] = backtracking;
			if(ft_valid_is_good(tab, position + 1))
				return (1);
		}
		backtracking++;
	}
	tab[i][j] = 0 
}

int	**ft_tab_sol(char *str)
{
	int	i;
	int	j;
	int	**tab;
	int	k;

	k = 0;
	tab = malloc(sizeof(int *) * 4 );
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


