#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Podaj trzy liczby: ");
    scanf("%d %d %d",&a, &b, &c);
    printf("suma trzech: %d\n",a+b+c);
    printf("roznica pierwszych dwoch: %d\n", a-b);
    int iloczyn = a*c;
    printf("iloczyn pierwszej i trzeciej: %d\n",iloczyn);
    int iloraz=c/b;
    printf("iloraz trzeciej i drugiej: %d\n",iloraz);
}
