#include <stdio.h>

int main() {

    //primeira carta
        char estado, codigo[20], cidade[20];
        unsigned long int populacao;
        float area_cidade, densidade_populacional, pib_per_capita;
        double pib;
        int qtd_pontos_turisticos;

    //segunda carta
        char estado2, codigo2[20], cidade2[20];
        unsigned long int populacao2;
        float area_cidade2, densidade_populacional2, pib_per_capita2;
        double pib2;
        int qtd_pontos_turisticos2;

        // pergunta informações da primeira carta

        printf("Por favor, informe o estado da sua primeira carta: \n\n"); //Printando primeiramente o texto da pergunta
        scanf(" %c", &estado); //Recebendo o valor/resposta da pergunta
        printf("\n"); //adiciona quebra de linha entre a resposta da pergunta anterior com a proxima pergunta para ficar mais limpo visualmente
        
        printf("Agora informe o código da sua primeira carta: \n\n");
        scanf(" %s", codigo);
        printf("\n");

        printf("Digite a cidade da sua primeira carta: \n\n");
        scanf(" %s", cidade);
        printf("\n");

        printf("Informe o número de habitantes da cidade da sua primeira carta: \n\n");
        scanf(" %lu", &populacao);
        printf("\n");


        printf("Informe a área (em km2) da cidade da sua primeira carta: \n\n");
        scanf("%f", &area_cidade);
        printf("\n");

        printf("Agora informe o PIB da cidade da sua primeira carta: \n\n");
        scanf("%lf", &pib);
        printf("\n");

        printf("Por último, informe a quantidade de pontos turísticos da cidade da sua primeira carta: \n\n");
        scanf(" %d", &qtd_pontos_turisticos);
        printf("\n");

        //pergunta informações da segunda carta

        printf("Obrigado pelas informações, agora vamos para o cadastro da segunda carta. Primeiramente, informe o estado da sua segunda carta: \n\n");
        scanf(" %c", &estado2);
        printf("\n");

        printf("Agora informe o código da sua segunda carta: \n\n");
        scanf(" %s", codigo2);
        printf("\n");

        printf("Digite a cidade da sua segunda carta: \n\n");
        scanf(" %s", cidade2);
        printf("\n");

        printf("Informe o número de habitantes da cidade da sua segunda carta: \n\n");
        scanf(" %lu", &populacao2);
        printf("\n");

        printf("Informe a área (em km2) da cidade da sua segunda carta: \n\n");
        scanf("%f", &area_cidade2);
        printf("\n");

        printf("Agora informe o PIB da cidade da sua segunda carta: \n\n");
        scanf("%lf", &pib2);
        printf("\n");

        printf("Por último, informe a quantidade de pontos turísticos da cidade da sua segunda carta: \n\n");
        scanf(" %d", &qtd_pontos_turisticos2);
        printf("\n");

        //calcula densidade populacional e pib per capita da primeira carta
        densidade_populacional = (float)populacao / area_cidade;
        pib_per_capita = (float)pib / populacao;

        //calcula densidade populacional e pib per capita da segunda carta
        densidade_populacional2 = (float)populacao2 / area_cidade2;
        pib_per_capita2 = (float)pib2 / populacao2;

        //densidades populacionais invertidas
        float densPopInvertida1 = 1.0/densidade_populacional;     
        float densPopInvertida2 = 1.0/densidade_populacional2;   

    
    // calcula supoerpoder de cada carta A
        float superpoderA = (float)populacao + (float)area_cidade + (float)pib + (float)qtd_pontos_turisticos + (float)densPopInvertida1 + (float)pib_per_capita;

    // calcula supoerpoder de cada carta B
        float superpoderB = (float)populacao2 + (float)area_cidade2 + (float)pib2 + (float)qtd_pontos_turisticos2 + (float)densPopInvertida2 + (float)pib_per_capita2;

    // armazena o resultado em variáveis
        int resultadoPopulacao, resultadoAreaCidade, resultadoPib, resultadoQtdPontosTuristicos, resultadoDensidadePopulacional, resultadoPibPerCapita, resultadoSuperPoder;

        resultadoPopulacao = populacao > populacao2;
        resultadoAreaCidade = area_cidade > area_cidade2;
        resultadoPib = pib > pib2;
        resultadoQtdPontosTuristicos = qtd_pontos_turisticos > qtd_pontos_turisticos2;
        resultadoDensidadePopulacional = densidade_populacional < densidade_populacional2;
        resultadoPibPerCapita = pib_per_capita > pib_per_capita2;
        resultadoSuperPoder = superpoderA > superpoderB;


        //imprime as informações das cartas e o resultado das comparaçōes
        
        printf("Obrigado pelas informações, aqui estão as informações das cartas cadastradas: \n\n");
        printf("\n");
       
        printf("CARTA 1:\n\n");
        printf("Estado: %c\n", estado);
        printf("Código da Carta: %s\n", codigo);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %lu\n", populacao);
        printf("Área: %.2f km²\n", area_cidade);
        printf("PIB: R$%.2lf\n", pib);
        printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
        printf("PIB Per Capita: R$%.2f\n\n", pib_per_capita);
        
        printf("CARTA 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da Carta: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("População: %lu\n", populacao2);
        printf("Área: %.2f km²\n", area_cidade2);
        printf("PIB: R$%.2lf\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
        printf("PIB Per Capita: R$%.2f\n\n", pib_per_capita2);
        

        printf("RESULTADO:\n\n");
        printf("Resultado - População: %d\n", resultadoPopulacao); 
        printf("Resultado - Área da Cidade: %d\n", resultadoAreaCidade);
        printf("Resultado - PIB: %d\n", resultadoPib);
        printf("Resultado - Pontos Turísticos: %d\n", resultadoQtdPontosTuristicos);
        printf("Resultado - Densidade Populacional: %d\n", resultadoDensidadePopulacional);
        printf("Resultado - PIB Per Capita: %d\n", resultadoPibPerCapita);
        printf("Resultado - Super Poder: %d\n", resultadoSuperPoder);

    return 0;
}
