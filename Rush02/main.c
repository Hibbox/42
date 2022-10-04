#include "struct.h"
#include <stdio.h>
char *get_key(char *str);
char *get_value(char *str);
int main(void)
{

char *chaine = get_key("1009752:zero");
char *chaine2 = get_value("100:zjghero");

    printf("%s\n", chaine);
    printf("%s", chaine2);


return (0);
}