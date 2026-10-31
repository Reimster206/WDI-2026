#include <stdio.h>
#include <stdlib.h>

int potegowanie(int liczba, int wykladnik){
    int wynik=1;
    for(int i=1;i<=wykladnik; i++){
        wynik*=liczba;
    }
    return wynik;
};


int main()
{

    return 0;
}
