#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    int codigo, populacao;
    char nome[50];
    float area;

    printf("Países\n");

    printf("Código da cidade: \n");
    scanf("%d", &codigo);

    printf("Nome: \n");
    scanf("%s", &nome);

    printf("População: \n");
    scanf("%d", &populacao);
    
    printf("Àrea: \n");
    scanf("%f", &area);

    printf("Código da cidade: %d - Nome: %s\n", codigo, nome);
    printf("População: %d - Àrea: %f", populacao, area);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
