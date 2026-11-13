#include <stdio.h>
#include <stdlib.h>

int main()
{
    char imie[13];
    gets(imie);
    int pierwsza = (int)imie[0];
    pierwsza=pierwsza-32;
    imie[0]=(char)pierwsza;
    printf("%s\n",imie);

    return 0;
}
