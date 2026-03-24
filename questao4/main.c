#include <stdio.h>

int main(){
    int num1;
    int num2;
    int mult;

  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  
   printf("Digite o segundo numero: ");
  scanf("%d", &num2);
  
mult = num1 * num2;
printf("A multiplicacao dos numeros é: %d", mult);

    return 0;
}
