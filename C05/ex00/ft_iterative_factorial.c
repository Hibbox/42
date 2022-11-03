int ft_iterative_factorial(int nb)
{
    int i;
    int resultat;

    i = 1;
    resultat = 1;

    if ((nb == 0) || (nb == 1))
        return (1);
    if (nb < 0)
        return (0);
    while(i <= nb)
    {
        resultat *= i;
        i++;
    }
    return resultat;
}

int main()
{
    printf("%d\n",ft_iterative_factorial(5));
}