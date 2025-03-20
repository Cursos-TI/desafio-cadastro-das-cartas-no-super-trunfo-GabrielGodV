#include <stdio.h>

int main(){
    //Carta 1
    char estado[1];
    char codigo[3];
    char cidade[40];
    int populacao;
    int turisticos;
    float area;
    float pib;
    float densidade;
    float pibper;

    printf("Digite seu Estado: \n");
    scanf("%s", &estado);

    printf("Digite seu Código: \n");
    scanf("%s", &codigo);

    printf("Digite sua Cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o Número da População: \n");
    scanf("%d", &populacao);

    printf("Digite a Área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &turisticos);

    densidade = populacao / area;
    pibper =  pib / populacao;

    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f Km²\n", area);
    printf("PIB: %f Bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", turisticos);
    printf("Densidade Populacional: %f hab/km²\n", densidade);
    printf("PIB per Capita: %f reais\n", pibper);

     //Carta 2
     char estado2[1];
     char codigo2[3];
     char cidade2[40];
     int populacao2;
     int turisticos2;
     float area2;
     float pib2;
     float densidade2;
     float pibper2;
 
     printf("Digite seu Estado: \n");
     scanf("%s", &estado2);
 
     printf("Digite seu Código: \n");
     scanf("%s", &codigo2);
 
     printf("Digite sua Cidade: \n");
     scanf("%s", &cidade2);
 
     printf("Digite o Número da População: \n");
     scanf("%d", &populacao2);
 
     printf("Digite a Área: \n");
     scanf("%f", &area2);
 
     printf("Digite o PIB: \n");
     scanf("%f", &pib2);
 
     printf("Digite o Número de Pontos Turísticos: \n");
     scanf("%d", &turisticos2);
 
     densidade2 = populacao2 / area2;
     pibper2 =  pib2 / populacao2;
 
     printf("Estado: %s\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Cidade: %s\n", cidade2);
     printf("População: %d\n", populacao2);
     printf("Área: %f Km²\n", area2);
     printf("PIB: %f Bilhões de reais\n", pib2);
     printf("Pontos Turísticos: %d\n", turisticos2);
     printf("Densidade Populacional: %f hab/km²\n", densidade2);
     printf("PIB per Capita: %f reais\n", pibper2);
 
    
 }
 
