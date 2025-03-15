#include <stdio.h>

int main() {

    //primeira carta
        char estado;
        char codigo[20];
        char cidade[20];
        int populacao;
        float area_cidade;
        double pib;
        int qtd_pontos_turisticos;
        float densidade_populacional;
        float pib_per_capita;


    //segunda carta
        char estado2;
        char codigo2[20];
        char cidade2[20];
        int populacao2;
        float area_cidade2;
        double pib2;
        int qtd_pontos_turisticos2;
        float densidade_populacional2;
        float pib_per_capita2;

        // pergunta informações da primeira carta

        printf("Por favor, informe o estado da sua primeira carta: \n\n"); //Printando primeiramente o texto da pergunta
        scanf(" %c", &estado); //Recebendo o valor/resposta da pergunta
        printf("\n"); //adiciona quebra de linha entre a resposta da pergunta anterior com a proxima pergunta para ficar mais limpo visualmente
        
        printf("Agora informe o código da sua primeira carta: \n\n");
        scanf(" %s", &codigo);
        printf("\n");

        printf("Digite a cidade da sua primeira carta: \n\n");
        scanf(" %s", &cidade);
        printf("\n");

        printf("Informe o número de habitantes da cidade da sua primeira carta: \n\n");
        scanf(" %i", &populacao);
        printf("\n");


        printf("Informe a área (em km2) da cidade da sua primeira carta: \n\n");
        scanf("%f", &area_cidade);
        printf("\n");

        printf("Agora informe o PIB da cidade da sua primeira carta: \n\n");
        scanf("%lf", &pib);
        printf("\n");

        printf("Por último, informe a quantidade de pontos turísticos da cidade da sua primeira carta: \n\n");
        scanf(" %i", &qtd_pontos_turisticos);
        printf("\n");

        //pergunta informações da segunda carta

        printf("Obrigado pelas informações, agora vamos para o cadastro da segunda carta. Primeiramente, informe o estado da sua segunda carta: \n\n");
        scanf(" %c", &estado2);
        printf("\n");

        printf("Agora informe o código da sua segunda carta: \n\n");
        scanf(" %s", &codigo2);
        printf("\n");

        printf("Digite a cidade da sua segunda carta: \n\n");
        scanf(" %s", &cidade2);
        printf("\n");

        printf("Informe o número de habitantes da cidade da sua segunda carta: \n\n");
        scanf(" %i", &populacao2);
        printf("\n");

        printf("Informe a área (em km2) da cidade da sua segunda carta: \n\n");
        scanf("%f", &area_cidade2);
        printf("\n");

        printf("Agora informe o PIB da cidade da sua segunda carta: \n\n");
        scanf("%lf", &pib2);
        printf("\n");

        printf("Por último, informe a quantidade de pontos turísticos da cidade da sua segunda carta: \n\n");
        scanf(" %i", &qtd_pontos_turisticos2);
        printf("\n");

        //calcula densidade populacional e pib per capita da primeira carta
        densidade_populacional = (float)populacao / area_cidade;
        pib_per_capita = (float)pib / populacao;

        //calcula densidade populacional e pib per capita da segunda carta
        densidade_populacional2 = (float)populacao2 / area_cidade2;
        pib_per_capita2 = (float)pib2 / populacao2;

        printf("Obrigado pelas informações, aqui estão as informações das cartas cadastradas: \n\n");
        printf("\n");
        printf("CARTA 1: \n\n Estado: %c \n Código da Carta: %s \n Nome da Cidade: %s \n População: %i \n Área: %.2f km² \n PIB: R$%.2lf \n Número de Pontos Turísticos: %i \n Densidade Populacional: %.2f hab/km² \n PIB Per Capita: R$%.2f \n\nCARTA 2: \n\n Estado: %c \n Código da Carta: %s \n Nome da Cidade: %s \n População: %i \n Área: %.2f km² \n PIB: R$%.2lf \n Número de Pontos Turísticos: %i \n Densidade Populacional: %.2f hab/km² \n PIB Per Capita: R$%.2f \n\n", estado, codigo, cidade, populacao, area_cidade, pib, qtd_pontos_turisticos, densidade_populacional, pib_per_capita, estado2, codigo2, cidade2, populacao2, area_cidade2, pib2, qtd_pontos_turisticos2, densidade_populacional2, pib_per_capita2);

    return 0;
}
