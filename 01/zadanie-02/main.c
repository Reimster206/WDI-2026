#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("POdaj liczbe zmiennoprzecinkowa: ");
    float liczba;
    scanf("%f",&liczba);
    printf("Liczba w zaokragleniu do 1 miejsca po przecinku: %.1f \n",liczba);
    printf("Liczba w zaokragleniu do 3 miejsca po przecinku: %.3f \n",liczba);
    printf("Liczba w zaokragleniu do 5 miejsca po przecinku: %.5f \n",liczba);
}
