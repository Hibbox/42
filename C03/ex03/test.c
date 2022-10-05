#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	
	if (nb == 0)
	{
		return (0);
	}
	while (dest[x])
	{
		x++;
	}
	while (y < nb && src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}

int main()
{
        char    src[]="ffff";
        char    dest[]="iiiii";

        ft_strncat(dest,src,1);
        printf("%s\n", dest);

	strncat(dest,src,1);
        printf("%s", dest);
}