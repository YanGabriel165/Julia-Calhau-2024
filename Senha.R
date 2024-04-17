#include<stdio.h>
int main () {
    float senha;


printf("Digite a senha: ");
scanf("%f", &senha);

printf("%1.f", senha);
if (senha==1234){
    
printf ("Acesso Permitido");
}else{
  printf("Acesso Negado");
  }


   return 0;
}
