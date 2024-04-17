#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"");

float umaduzia = 0.25;
float menosque = 0.30;
int duzia = 12;
int menosduzia;
int qtde_maca;

printf("digite a quantidade de maca");
scanf("%d", &qtde_maca);

if(qtde_maca>=duzia){
    printf("voce comprou %d maca \n", qtde_maca);
    printf("a sua compra ficou: R$%.2f", qtde_maca*umaduzia);
    
    
}
else{
    printf("voce comprou %d maçã \n", qtde_maca);
    printf("a sua compra ficou: R$%.2f", qtde_maca*menosque);
}
return 0;
}
