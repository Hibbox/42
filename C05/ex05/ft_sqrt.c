#include <stdio.h>

int ft_sqrt(int nb)
{
    int i = 1;

    while(i * i < nb && nb <= 2147395600)
        i++;
    if ( i * i == nb)
        return (i);
    return 0;
}

int main ()
{
    int i = 46340;
   /* while(i * i < 2147483647)  permet de chercher la racine carré entière la plus grande pour les int
        i++;
    printf("%d\n", ft_sqrt(2147395599)); */
}