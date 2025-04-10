#include <stdio.h>

int main() {
    char estado, segundoEstado, codigo[5], segundoCodigo[5], cidade[50], segundaCidade[50];
    int populacao, segundaPopulacao, pontos, segundoPontos;
    float area, segundaArea, pib, segundoPib;
    float desensidade, segundaDesensidade;
    float pibPercap, segundoPibPercap;

    printf("Informe os dados da primeira carta:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado);

    printf("Código da Carta (número de 1 a 4 | ex: A01): ");
    scanf("%s", codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área (em km²): ");
    scanf("%f", &area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib); 

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos);

  
    desensidade = (float)populacao / area;
    pibPercap = (pib * 1000000000) / (float)populacao; 
    printf("\nInforme os dados da segunda carta:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &segundoEstado);

    printf("Código da Carta (número de 1 a 4 | ex: A01): ");
    scanf("%s", segundoCodigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", segundaCidade);

    printf("População: ");
    scanf("%d", &segundaPopulacao);

    printf("Área (em km²): ");
    scanf("%f", &segundaArea);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &segundoPib); 

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &segundoPontos);

   
    segundaDesensidade = (float)segundaPopulacao / segundaArea;
    segundoPibPercap = (segundoPib * 1000000000) / (float)segundaPopulacao; 

    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", desensidade);
    printf("PIB per Capita: %.2f reais\n", pibPercap);

   
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", segundoEstado);
    printf("Código: %s\n", segundoCodigo);
    printf("Nome da Cidade: %s\n", segundaCidade);
    printf("População: %d\n", segundaPopulacao);
    printf("Área: %.2f km²\n", segundaArea);
    printf("PIB: %.2f bilhões de reais\n", segundoPib);
    printf("Número de Pontos Turísticos: %d\n", segundoPontos);
    printf("Densidade Populacional: %.2f hab/km²\n", segundaDesensidade);
    printf("PIB per Capita: %.2f reais\n", segundoPibPercap);

    return 0;
}
