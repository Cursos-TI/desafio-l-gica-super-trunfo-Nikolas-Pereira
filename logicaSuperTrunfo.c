#include <stdio.h>

int main() {
    char Campo_limpo[100], Jundiai[200];
    int populacao_Campo_limpo, populacao_Jundiai;

    printf("Digite o nome da cidade:\n");
    scanf("%s", &Campo_limpo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &Jundiai);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao_Campo_limpo);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao_Jundiai);

   if (populacao_Campo_limpo > populacao_Jundiai) {
        printf("Campo limpo tem maior população.\n");
    } else if (populacao_Jundiai > populacao_Campo_limpo) {
        printf("Jundiai tem maior população!\n");
    } else {

        printf("Jundiai tem mais população! \n");
    }
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

