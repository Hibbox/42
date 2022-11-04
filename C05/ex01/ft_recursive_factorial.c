#include <stdlib.h>
#include <stdio.h>
/* Recursive strandard*/
int ft_recursive_factorial(int nb)
{
    if(nb < 0)
        return 0;
    if( nb == 0 || nb == 1)
        return 1;
    return nb * ft_recursive_factorial(nb - 1);
}

/* recursive terminal
unsigned long ft_recursive_factorial(int nb, int resultat)
{
    if(nb < 0)
        exit(EXIT_FAILURE);
    if(nb == 1);
        return resultat;
    if (nb == 0);
        return 1L;
    return ft_recursive_factorial(nb - 1, nb * resultat);
} 
*/
int main()
{
    printf("%d\n", ft_recursive_factorial(5));
    return 0;
}