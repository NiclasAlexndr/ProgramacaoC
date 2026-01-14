#include <stdio.h>

    int main(){
        
        
        char estado;
        char cidade[20];
        int populacao;
        float area;
        float pib;
        int pontos;
        
        printf("Olá. vamos jogar um jogo! Deixa eu te apresentar. Ele se chama SUPER TRUNFO, é um jogo de cartas onde você mesmo pode personalizar a sua carta de acordo com um estado e cidade de sua escolha! É bem fácil, só preciso que você forneça algumas informações que eu pedir, tudo bem? Vamos lá!\n\n");
        
        printf("Digite um estado (escolha uma incial de A - H): ");
        scanf("%c", &estado);
        
        printf("Digite a cidade: ");
        scanf("%s", &cidade);
        
        printf("Digite a população da cidade: ");
        scanf("%d", &populacao);
        
        printf("Digite a área da cidade (em km2): ");
        scanf("%f", &area);
        
        printf("Digite o PIB da cidade: ");
        scanf("%f", &pib);
        
        printf("Digite quantos pontos turísticos a cidade tem: ");
        scanf("%d", &pontos);
        
        printf("\n\n");
        
        printf("Perfeito! Essas são as informações da primeira carta que você cadastrou: \n\n");
        
        printf("Carta 1: \n");
        printf("Estado: %c\n", estado);
        printf("Código: %c01\n", estado);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %fKm2\n",area);
        printf("PIB: %f Bilhões de Reais\n", pib);
        printf("Número de Pontos Turísticos: %d\n", pontos);
        
        
        char estado2[10];
        char cidade2[20];
        int populacao2;
        float area2;
        float pib2;
        int pontos2;
        
        printf("\n\n");
        
        printf("Agora vamos cadastrar a segunda carta!\n\n");
        
        printf("Digite um estado (escolha uma incial de A - H): ");
        scanf("%s", &estado2);
        
        printf("Digite a cidade: ");
        scanf("%s", &cidade2);
        
        printf("Digite a população da cidade: ");
        scanf("%d", &populacao2);
        
        printf("Digite a área da cidade (em km2): ");
        scanf("%f", &area2);
        
        printf("Digite o PIB da cidade: ");
        scanf("%f", &pib2);
        
        printf("Digite quantos pontos turísticos a cidade tem: ");
        scanf("%d", &pontos2);
        
        printf("\n\n");
        
        printf("Show! Essas são as informações de segunda carta que você cadastrou!\n\n");
        
        printf("Carta 2: \n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s02\n", estado2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %fKm2\n",area2);
        printf("PIB: %f Bilhões de Reais\n", pib2);
        printf("Número de Pontos Turísticos: %d\n\n\n", pontos2);
        
        printf("Por enquanto é só, mas pode deixar que eu retorno com mais atualizações. Obrigado!");
        
          
            return 0;
        
        
    }
