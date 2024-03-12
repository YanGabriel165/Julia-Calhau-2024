#include <stdio.h>
#include <locale.h>
int main (){
    int x,y,z;
    printf("Digite o primeiro número inteiro");
    scanf ("%d", &x);
    
    printf("Digite o segundo número inteiro");
    scanf ("%d", &y);
    z=x+y;
    printf("A soma de x+y é =%d", z);
    return 0;
}