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

    // Cria um menu interativo para o jogador selecionar qual atributo quer comparar
    
        int opcaoAtributo;
        
        printf("Obrigado pelas informações, agora qual atributo você deseja comparar? (Digite o número da opção desejada) \n\n");
        printf("1. Nome da Cidade\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Número de pontos turísticos\n");
        printf("6. Densidade demográfica\n)";
        
        scanf("%d", &opcaoAtributo);

    //implementado o switch para direcionar para o atributo que o jogador quer comparar
        switch(opcaoAtributo){
            case 1:
            printf("Você escolheu comparar: Nome do Cidade\n");
            break;
            
            case 2:
            printf("Você escolheu comparar: População\n");
            break;

            case 3:
            printf("Você escolheu comparar: Área\n");
            break;

            case 4:
            printf("Você escolheu comparar: PIB\n)";
            break;

            case 5:
            printf("Você escolheu comparar: Número de pontos turísticos\n");
            break;

            case 6:
            printf("Você escolheu comparar: Densidade Demográfica\n");
            break;

            default:
            printf("Opção inválida.\n");
            break;
        }

    //verifica as condições de qual carta é a vencedora exceto o atributo de cidade que é só para efeito de informação e não de comparação
    
        if (opcaoAtributo == 1) {
    printf("Cidade - Carta A: %s\nCidade - Carta B: %s\n", cidade, cidade2);
            
        } else if (opcaoAtributo == 2) {
            printf("Cidades: %s e %s\n", cidade, cidade2);
            printf("Atributo: População\n");
            printf("População %s: %d | População %s: %d\n", cidade, populacao, cidade2, populacao2);
                if (populacao > populacao2) {
            printf("Resultado: A primeira carta venceu a rodada!\n");
             } else if (populacao < populacao2) {
            printf("Resultado: A segunda carta venceu a rodada!\n");
            } else {
            printf("Resultado: Empate!\n");
    }

        } else if (opcaoAtributo == 3) {
            printf("Cidades: %s e %s\n", cidade, cidade2);
            printf("Atributo: Área\n");
            printf("Área %s: %.2f | Área %s: %.2f\n", cidade, area_cidade, cidade2, area_cidade2);
                if (area_cidade > area_cidade2) {
                printf("Resultado: A primeira carta venceu a rodada!\n");
            } else if (area_cidade < area_cidade2) {
                printf("Resultado: A segunda carta venceu a rodada!\n");
            } else {
                printf("Resultado: Empate!\n");
    }

        } else if (opcaoAtributo == 4) {
            printf("Cidades: %s e %s\n", cidade, cidade2);
            printf("Atributo: PIB\n");
            printf("PIB %s: %.2f | PIB %s: %.2f\n", cidade, pib, cidade2, pib2);
                if (pib > pib2) {
                printf("Resultado: A primeira carta venceu a rodada!\n");
             } else if (pib < pib2) {
                printf("Resultado: A segunda carta venceu a rodada!\n");
            } else {
                printf("Resultado: Empate!\n");
    }

        } else if (opcaoAtributo == 5) {
            printf("Cidades: %s e %s\n", cidade, cidade2);
            printf("Atributo: Pontos Turísticos\n");
            printf("Pontos turísticos %s: %d | %s: %d\n", cidade, qtd_pontos_turisticos, cidade2, qtd_pontos_turisticos2);
                if (qtd_pontos_turisticos > qtd_pontos_turisticos2) {
                printf("Resultado: A primeira carta venceu a rodada!\n");
            } else if (qtd_pontos_turisticos < qtd_pontos_turisticos2) {
                printf("Resultado: A segunda carta venceu a rodada!\n");
            } else {
                printf("Resultado: Empate!\n");
    }

        } else if (opcaoAtributo == 6) {
            printf("Cidades: %s e %s\n", cidade, cidade2);
            printf("Atributo: Densidade Populacional\n");
            printf("Densidade %s: %.2f | %s: %.2f\n", cidade, densidade_populacional, cidade2, densidade_populacional2);
                if (densidade_populacional < densidade_populacional2) {
                printf("Resultado: A primeira carta venceu a rodada!\n");
            } else if (densidade_populacional > densidade_populacional2) {
                printf("Resultado: A segunda carta venceu a rodada!\n");
            } else {
                printf("Resultado: Empate!\n");
    }
}


        // PROFESSOR A PARTIR DAQUI EU COLOQUEI COMO COMENTADO O CÓDIGO QUE ESTAVA NO PROJETO ANTES DE IMPLEMENTAR A COMPARAÇÃO DAS CARTAS VISTO QUE NÃO FAZ SENTIDO INCLUIR JUNTO DO CÓDIGO ATUAL
            
        //imprime as informações das cartas e o resultado das comparaçōes
            
        //  printf("CARTA 1:\n\n");
         // printf("Estado: %c\n", estado);
        //  printf("Código da Carta: %s\n", codigo);
         // printf("Nome da Cidade: %s\n", cidade);
         // printf("População: %lu\n", populacao);
        //  printf("Área: %.2f km²\n", area_cidade);
        //  printf("PIB: R$%.2lf\n", pib);
         // printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos);
        //  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
        //  printf("PIB Per Capita: R$%.2f\n\n", pib_per_capita);
        
         // printf("CARTA 2:\n\n");
        //  printf("Estado: %c\n", estado2);
         // printf("Código da Carta: %s\n", codigo2);
         // printf("Nome da Cidade: %s\n", cidade2);
         // printf("População: %lu\n", populacao2);
         // printf("Área: %.2f km²\n", area_cidade2);
        //  printf("PIB: R$%.2lf\n", pib2);
        //  printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos2);
         // printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
         // printf("PIB Per Capita: R$%.2f\n\n", pib_per_capita2);
        

        // printf("RESULTADO:\n\n");
        // printf("Resultado - População: %d\n", resultadoPopulacao); 
        // printf("Resultado - Área da Cidade: %d\n", resultadoAreaCidade);
        // printf("Resultado - PIB: %d\n", resultadoPib);
        // printf("Resultado - Pontos Turísticos: %d\n", resultadoQtdPontosTuristicos);
        // printf("Resultado - Densidade Populacional: %d\n", resultadoDensidadePopulacional);
        // printf("Resultado - PIB Per Capita: %d\n", resultadoPibPerCapita);
        // printf("Resultado - Super Poder: %d\n\n", resultadoSuperPoder);

    //Adiciona a comparação das cartas para verificar qual é maior com o intuito de eleger a vencedora
    // if (populacao > populacao2){
            // printf("Comparação de Cartas (Atributo: População):\n\n");
            //printf("População Primeira Carta: %d\n", populacao);
            // printf("População Segunda Carta: %d\n\n", populacao2);
            // printf("A primeira carta é a vencedora.\n");
     // } else {
            // printf("Comparação de Cartas (Atributo: População):\n\n");
            // printf("População Primeira Carta: %d\n", populacao);
            //printf("População Segunda Carta: %d\n\n", populacao2);
            // printf("A segunda carta é a vencedora.\n");
        }

    return 0;
}
