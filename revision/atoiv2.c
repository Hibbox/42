#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    
    while(str[i] && (str[i] >= 9 && str[i] <= 13 || str[i] == ' '))
        i++;
    while(str[i] && (str[i] == '+' || str[i] == '-'))
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result += str[i] - '0';
        i++;
    }
    return (result * sign);
}

int main ()
{
    printf("%d", ft_atoi("  -+-+-1231"));
}