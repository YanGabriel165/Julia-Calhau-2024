#include<stdio.h>
int main (){
    
    int ano_nascimento;
    int situacao;
    int ano = 2024;
    
    
printf("Digite o nascimento da pessoa");
scanf("%d", &ano_nascimento);

situacao = ano - ano_nascimento;

if(situacao >= 18){
    printf("pode votar");
    



}else{
   printf("Não pode votar");
   
}

return 0;

}
