#include <stdio.h>
int main() {
    
    //Variáveis das cartas 1 e 2
    int pontosturisticos, pontosturisticos2, populacao, populacao2;
    float pib, pib2, area, area2;
    char estado, estado2;
    char nome[30], nome2[30], codigocarta[5], codigocarta2[5];

    // Cadastro das Cartas:
    // Cadastro da carta 1
    printf("Digite o nome da cidade 1: \n");
    scanf("%s", nome);
    
    printf("Digite o estado da carta 1: \n");
    scanf(" %c", &estado);
    
    printf("Digite o código da carta 1: \n");
    scanf("%s", codigocarta);

    printf("Digite a área da cidade 1: \n");
    scanf(" %f", &area);
    
    printf("Digite a população da cidade 1: \n");
    scanf(" %d", &populacao);

    printf("Digite o PIB da cidade 1: \n");
    scanf(" %f", &pib);
    
    printf("Digite o número de pontos turísticos da cidade 1: \n");
    scanf(" %d", &pontosturisticos);
      printf("\n");
  
      //--------------------------------------------------
      
      //Cadastro das cartas 2
    printf("Digite o nome da cidade 2: \n");
    scanf("%s", nome2);
    
    printf("Digite o estado da carta 2: \n");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta 2: \n");
    scanf("%s", codigocarta2);

    printf("Digite a área da cidade 2: \n");
    scanf(" %f", &area2);
    
    printf("Digite a população da cidade 2: \n");
    scanf(" %d", &populacao2);

    printf("Digite o PIB da cidade 2: \n");
    scanf(" %f", &pib2);
    
    printf("Digite o número de pontos turísticos da cidade 2: \n");
    scanf(" %d", &pontosturisticos2);
       printf("\n");
    
       //Exibição dos dados das cartas
      
       // Dados da Carta 1
    printf("Carta 1:\n");
        printf("\n");
    printf("Nome da Cidade: %s\n", nome);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigocarta);
    printf("Área Km²: %.2f Km²\n", area);
    printf("População: %d\n", populacao);
    printf("PIB: %.3f milhões de reais\n", pib);
    printf("Número de pontos Turísticos: %d\n", pontosturisticos);
       printf("\n\n");
       
       // Dados da Carta 2
    printf("Carta 2:\n");
        printf("\n");
    printf("Nome da Cidade: %s\n", nome2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Área Km²: %.3f Km²\n", area2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.3f milhões de reais\n", pib2);
    printf("Número de pontos Turísticos: %d\n", pontosturisticos2);
    
   return 0;




}

