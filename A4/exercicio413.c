#include <stdio.h>
#include <string.h>

int main (){
    char nome [80];
    int tamanho;
    printf("Digite o seu nome completo:\n");
    gets(nome);
    tamanho = strlen(nome);
    printf("O comprimento do nome é: %d", tamanho);
    return(0);
}