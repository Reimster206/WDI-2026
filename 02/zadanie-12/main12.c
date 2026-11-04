#include <stdio.h>
#include <stdlib.h>

void sumanliczb(int n){
    int suma=0;
    int a;
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        suma+=a;
    }
    printf("suma: %d",suma);
};

void odejmowanie(int liczba){
        int a=1;
        while(a!=0){
            scanf("%d",&a);
            liczba-=a;
        };
        printf("wynik: %d",liczba);
};

int mnozenie(int a, int b){
    return a*b;
};

float dzielenie(int a, int b){
    if(b==0){
        return -1;
    }else{
        return (float)a/b;
    }
};

int potegowanie(int a, int b){
    if(b==0){
        return 1;
    }else{
        return a*potegowanie(a,b-1);
    }
};

int kwadrat(int a){
    return a*a;
};

int silnia(int a){
    if(a<0){
        return -1;
    }
    if(a==0){
        return 1;
    };
    return(a*silnia(a-1));
}

int main()
{
    int a,b,c;
    printf("KALKULATOR \n");
    printf("menu (wpisz cyfre): \n 1.dodawanie n liczb\n 2.odejmowanie od liczby az do momentu podania '0'\n");
    printf(" 3.mnozenie dwoch liczb\n 4.dzielenie liczby\n 5.potegowanie\n 6.kwadrat liczby\n 7.silnia\n");
    scanf("%d", &c);
    switch (c){
    case 1:
        printf("Podaj ile liczb zsumowac: ");
        scanf("%d",&a);
        sumanliczb(a);
        break;
    case 2:
        printf("Podaj liczbe od ktorej chcesz odejmowac kolejne liczby: ");
        scanf("%d",&a);
        odejmowanie(a);
        break;
    case 3:
        printf("Podaj dwie liczby do wykonania mnozenia: ");
        scanf("%d %d", &a,&b);
        printf("Wynik: %d", mnozenie(a,b));
        break;
    case 4:
        printf("POdaj dwie liczby do wykonania dzielenia: ");
        scanf("%d %d",&a,&b);
        if(b==0){
            printf("Nie mozna dzielic przez zero!!!");
        }else{
            printf("wynik: %.02f",dzielenie(a,b));
        };
        break;
    case 5:
        printf("Podaj podstawe potegowania: ");
        scanf("%d", &a);
        printf("Podaj wykladnik: ");
        scanf("%d",&b);
        printf("Wynik: %d",potegowanie(a,b));
        break;
    case 6:
        printf("Podaj liczbe jakiej kwadrat chcesz obliczyc: ");
        scanf("%d",&a);
        printf("Wynik: %d",kwadrat(a));
        break;
    case 7:
        printf("Podaj liczbe do jakiej wynik silni chcesz znac: ");
        scanf("%d",&a);
        printf("Wynik: %d",silnia(a));
        break;
    default:
        printf("Podana liczbe ze zlego zakresu");
        break;
    };
    return 0;
}
