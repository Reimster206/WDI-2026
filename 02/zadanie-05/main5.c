
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char znak;
    printf("Podaj klase spoleczna (pierwsza litere): ");
    scanf(" %c",&znak);
    switch(znak){
    case 'K':
            printf("Krolowa moze: rozkazywac Krolowi, ");

        case 'M':
            if(znak=='M'){
                printf("Mag: rozmawiac z Krolem, ");
            }else{
                printf("rozmawiac z Krolem, ");
            }
        case 'R':
            if(znak=='R'){
                printf("Rycerz moze: wchodzic do zamku codziennie oraz rekrutowac giermkow, ");
            }else{
                printf("wchodzic do zamku codziennie oraz rekrutowac giermkow, ");
            }
        case 'G':
            if(znak=='G'){
                printf("Giermek moze: wchodzic na dziedziniec zamkowy codziennie, ");
            }else{
                printf("wchodzic na dziedziniec zamkowy codziennie, ");
            }
        case 'P':
            if(znak=='P'){
                printf("Poddany moze: czcic krola.\n");
            }else{
                printf("czcic Krola.\n");
            }
            break;

        default:
            printf("Nie ma takiej klasy spolecznej!\n");
    }


    return 0;
}
