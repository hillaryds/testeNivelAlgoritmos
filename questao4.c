/*  Escreva uma função que receba dois números positivos por parãmetro e retorne a soma dos N números
inteiros existentes entre eles.   */
/*OBS: Demorei bastante nessa tentando lebrar da sintaxe da
função*/
#include <stdio.h>



int somaInt(int num1, int num2){
    int soma = 0;
    
    for(int i= num1; i<= num2; i++){
        if(i == num1){
            soma = num1;
        }
        else{
            soma += i;
        }
        printf("Adicionando o numero [%i] a soma seria [%i]\n", i, soma);
    }
    
    
    return(soma);
}

int main(){
    int num1, num2, variavel;
    
    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);

    printf("Digite o segundo numero: ");
    scanf("%i", &num2);

    printf(" A soma dos numeros entre [%i] e [%i] sera [%i]\n", num1, num2, somaInt(num1, num2));

    return 0;
}