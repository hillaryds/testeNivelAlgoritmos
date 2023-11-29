/* 1. Implemente uma funcao que receba como parametro um vetor de numeros inteiros (vet) de tamanho
n e inverta a ordem dos elementos armazenados nesse vetor.*/

/* O intuito seria utilizar um for com passo contrário */


#include <stdio.h>


int main ( void ) {
    int quantidadeNum;
    printf("Digite a quantidade de numeros que o seu vetor tera: ");
    scanf("%i", &quantidadeNum);
    int vetor[quantidadeNum];
    int entrada;

    for (int i=1; i<= quantidadeNum; i++){
        printf("Digite o numero [%i]: ", i); 
        scanf("%i", &entrada);
        vetor[i] = entrada;
    }
    
    printf("O vetor contem: ");

    for (int i = quantidadeNum; i >=1; i--){
        printf("%i; ", vetor[i]);
    }

    return 0;
}