#include <stdio.h>
#include <math.h>

int main(){
    int num1;
    int num2;
    double resultado1;
    double resultado2;
   
   printf("Digite o primeiro numero: ");
   scanf("%d", &num1);
   
   printf("Digite o segundo numero: ");
   scanf("%d", &num2);
   
   resultado1 = pow(num1, num2);
   resultado2 = pow(num2, num1);
   
   printf("O primeiro numero elevado ao segundo é: %.0lf\n", resultado1);
   printf("O segundo numero elevado ao primeiro é: %.0lf\n", resultado2);
   
   return 0;
}
