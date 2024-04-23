#include<stdio.h>
int main (){
    int a,b,numero;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    
    if(a>b) {
        printf("O maior: %d \n", a);
        printf("E o menor: %d", b);
    }else{
        printf("O maior: %d \n", b);
        printf("E o menor: %d", a);
    }
    return 0;
}
