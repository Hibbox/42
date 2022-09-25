/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 10:31:41 by mpeulet           #+#    #+#             */
/*   Updated: 2022/09/25 20:16:21 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb);

int	ft_strlen(char *str);

void	ft_putstr(char *str);

int	ft_atoi(char *str);

void    printfinaltabligne1(int *tab);

int     checkarguments(int ac, char *av);

void    ft_print_tab(int **tab);

int     ft_check_line(int k, int **tab, int line);

int    ft_check_col(int k, int **tab, int col);

int     ft_valid_is_good( int **tab, int position);

int     ft_is_finish(int **tab,int **tab_sol);

int     **ft_tab_sol(char **str);
