#include <stdio.h>

int main(){
    int num;
    int positivo = 0, negativo = 0, zero = 0;
    int i;
    
    for(i = 1; i <= 5; i++){
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if(num > 0){
        positivo++;
    }else if(num < 0){
        negativo++;
        
    }else{
        zero++;
    }
    }
    
    printf("Positivos: %d\n", positivo);
    printf("Negativos: %d\n", negativo);
    printf("Zeros: %d", zero);

    return 0;
}
