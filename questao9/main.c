#include <stdio.h>

int main(){
    int num1;
    int num2;
    float divisao;
    int resto;
   
   printf("Digite o primeiro numero: ");
   scanf("%d", &num1);
   
   printf("Digite o segundo numero: ");
   scanf("%d", &num2);

   divisao = (float) num1 / num2;
   resto = num1 % num2;
   
   printf("O resto da divisao é: %d\n", resto);
   
   return 0;
}
