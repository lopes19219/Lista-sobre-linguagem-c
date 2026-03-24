#include <stdio.h>
#include <math.h>

int main(){
    int num;
    double raiz;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    raiz = sqrt(num);
    
    printf("A raiz quadrada de seu numero é: %.2lf\n", raiz);
    
    return 0;
}
