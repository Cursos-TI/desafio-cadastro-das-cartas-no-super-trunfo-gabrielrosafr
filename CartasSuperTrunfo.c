#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    //primeira carta
        char estado;
        char codigo[10];
        char cidade[20];
        int populacao;
        float area_cidade;
        float pib;
        int qtd_pontos_turisticos;
    //segunda carta
        char estado2;
        char codigo2[10];
        char cidade2[20];
        int populacao2;
        float area_cidade2;
        float pib2;
        int qtd_pontos_turisticos2;

        // pergunta informações da primeira carta

        printf("Por favor, informe o estado da sua primeira carta: \n"); //Printando primeiramente o texto da pergunta
        scanf("%c", &estado); //Recebendo o valor/resposta da pergunta
        
        printf("Agora informe o código da sua primeira carta: \n");
        scanf("%s", &codigo);

        printf("Digite a cidade da sua primeira carta: \n");
        scanf("%s", &cidade);

        printf("Informe o número de habitantes da cidade da sua primeira carta.\n");
        scanf("%i", &populacao);


        printf("Informe a área (em km2) da cidade da sua primeira carta.\n\n Obs: digite apenas o números.");
        scanf("%f", &area_cidade);

        printf("Agora informe o PIB da cidade da sua primeira carta: \n");
        scanf("%f", &pib);

        printf("Por último, informe a quantidade de pontos turísticos da cidade da sua primeira carta: \n");
        scanf("%i", &qtd_pontos_turisticos);

        //pergunta informações da segunda carta

        printf("Obrigado pelas informações, agora vamos para a segunda carta.\n\n Por favor, informe o estado da sua segunda carta: \n");
        scanf("%c", &estado2);

        printf("Agora informe o código da sua segunda carta: \n");
        scanf("%s", &codigo2);

        printf("Digite a cidade da sua segunda carta: \n");
        scanf("%s", &cidade2);

        printf("Informe o número de habitantes da cidade da sua segunda carta.\n");
        scanf("%i", &populacao2);

        printf("Informe a área (em km2) da cidade da sua segunda carta.\n\n Obs: digite apenas o números.");
        scanf("%f", &area_cidade2);

        printf("Agora informe o PIB da cidade da sua segunda carta: \n");
        scanf("%f", &pib2);

        printf("Por último, informe a quantidade de pontos turísticos da cidade da sua primeira carta: \n");
        scanf("%i", &qtd_pontos_turisticos2);

        printf("Obrigado pelas informações, aqui estão as informações das cartas cadastradas: \n\n");
        printf("CARTA 1: \n\n Estado: %c \n Código da Carta: %s \n Nome da Cidade: %s \n População: %i \n Área (em km2): %f \n PIB: %f \n Número de Pontos Turísticos: %i \n\n CARTA 2: \n\n Estado: %c \n Código da Carta: %s \n Nome da Cidade: %s \n População: %i \n Área (em km2): %f \n PIB: %f \n Número de Pontos Turísticos: %i \n", estado, codigo, cidade, populacao, area_cidade, pib, qtd_pontos_turisticos, estado2, codigo2, cidade2, populacao2, area_cidade2, pib2, qtd_pontos_turisticos2);

        








    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
