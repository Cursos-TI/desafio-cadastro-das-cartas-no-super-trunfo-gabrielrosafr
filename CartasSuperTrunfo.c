#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
        char estado;
        char codigo[10];
        char cidade[20];
        int populacao;
        float area_cidade;
        float pib;
        int qtd_pontos_turisticos;


        printf("Por favor, informe o estado da sua primeira carta: \n"); //Printando primeiramente o texto da pergunta
        scanf("%c", &estado); //Recebendo o valor/resposta da pergunta
        
        printf("Agora informe o código da sua primeira carta: \n");
        scanf("%s", &codigo);

        printf("Digite a cidade da sua primeira carta: \n");
        scanf("%s", &cidade);

        printf("Informe a área (em km2) da cidade da sua primeira carta.\n\n Obs: digite apenas o números.");
        scanf("%f", &area_cidade);

        printf("Agora informe o PIB da cidade da sua primeira carta: \n");
        scanf("%f", &pib);

        printf("Por último, informe a quantidade de pontos turísticos da cidade da sua primeira carta: \n");
        scanf("%i", &qtd_pontos_turisticos);

        printf("Obrigado pelas informações, agora vamos para a segunda carta.\n\n Por favor, informe o estado da sua segunda carta: \n");
        








    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
