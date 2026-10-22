#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Podaj dwie liczby: ");
    scanf("%d %d",&a,&b);
    char znak;
    printf("Podaj znak (+, -, *, /, %): ");
    scanf(" %c",&znak);
    printf("Wynik: ");
    if(znak=='+'){
        printf("%d", a+b);
    }else if(znak == '-'){
        printf("%d", a-b);
    }else if(znak == '*'){
        int mnozenie = a*b;
        printf("%d", mnozenie);
    }else if(znak == '/'){
        if(b!=0){
            float dzielenie=(float)a/b;
            printf("%.2f", dzielenie);
        }else{
            printf("Nie mozna dzielic przez 0!!!!");
        }
    }else if(znak =='%'){
        if(b!=0){
            int modulo = a%b;
            printf("%d",modulo);
        }else{
            printf("Nie mozna dzielic przez 0!!!!");
        }

    }else{
        printf("Podano zly znak");
    }

}

