

int ft_iterative_power(int nb, int power)
{
    int i;
    int resultat;

    i = 1;
    resultat = 1;
    if (power < 0)
        return (0);
    if (nb == 0 && power == 0)
        return 1;
    while(i <= power)
    {
        resultat *= nb;
        i++;
    }
return resultat;
}

int main()
{
    printf("%d\n", ft_iterative_power(0,1));
}