
int ft_finobacci(int index)
{
    if (index < 0)
        return(-1);
    if (index == 0)
        return(0);
    if (index == 1)
        return(1);

return ft_finobacci(index - 1) + ft_finobacci(index - 2);
}

int main()
{
    printf("%d",ft_finobacci(10));
}