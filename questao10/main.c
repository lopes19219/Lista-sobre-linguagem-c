#include <stdio.h>

int main(){
    int num1;
    int num2;
    float divisao;
    int quociente;
 
   printf("Digite o primeiro numero: ");
   scanf("%d", &num1);
   
   printf("Digite o segundo numero: ");
   scanf("%d", &num2);

   divisao = (float) num1 / num2;
   quociente = num1 / num2; 
   
   printf("O quociente da divisao é: %d\n", quociente);
   
   return 0;
}
