#include <stdio.h>

int main() {
    char Cidade1[100], Cidade2[100];  
    int populacao_Cidade1, populacao_Cidade2;

    printf("Digite o nome da primeira cidade:\n");
    scanf("%99s", Cidade1);  

    printf("Digite o nome da segunda cidade:\n");
    scanf("%99s", Cidade2);  

    printf("Digite a população da primeira cidade:\n");
    scanf("%d", &populacao_Cidade1);  

    printf("Digite a população da segunda cidade:\n");
    scanf("%d", &populacao_Cidade2);  

  
    if (populacao_Cidade1 > populacao_Cidade2) {
        printf("%s tem maior população.\n", Cidade1);  
    } else if (populacao_Cidade2 > populacao_Cidade1) {
        printf("%s tem maior população!\n", Cidade2);  
    } else {
        printf("As cidades têm a mesma população!\n");  
    }

    return 0;
}



// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

 
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

