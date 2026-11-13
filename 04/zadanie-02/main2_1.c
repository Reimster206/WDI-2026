#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char imie[13];
    gets(imie);
    imie[0]=toupper(imie[0]);
    printf("%s\n",imie);

    return 0;
}
