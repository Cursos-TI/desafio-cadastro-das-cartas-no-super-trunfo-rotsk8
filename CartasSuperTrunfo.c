#include <stdio.h>

int main(){
    char inicial1 = 'A';
    char carta1;
    char codigo1[10] = "A01";
    char estado1[20] = "estado";
    char cidade1[30] = "cidade";
    
    int populacao1;
    int pontos_turisticos1;

    float area1;
    float pib1;

    printf("carta1\n");

    printf("digite seu código:\n");
    scanf("%s",codigo1);

    printf("digite seu estado:\n");
    scanf("%s",estado1);

    printf("digite sua cidade:\n");
    scanf("%s",cidade1);

    printf("digite sua população:\n");
    scanf("%d",&populacao1);

    printf("digite a quantidade de pontos turísticos:\n");
    scanf("%d",&pontos_turisticos1);

    printf("digite sua área:\n");
    scanf("%f",&area1);

    printf("digite seu pib:\n");
    scanf("%f",&pib1);

    char inicial2 = 'B';
    char carta1;
    char codigo2[40] = "A02";
    char estado2[50] = "Estado";
    char cidade2[60] = "Cidade";

    printf("FIM CARTA 01\n\n");
    
    int populacao2;
    int pontos_turisticos2;

    float area2;
    float pib2;

    printf("carta2\n");

    printf("digite seu código:\n");
    scanf("%s",codigo2);

    printf("digite seu estado:\n");
    scanf("%s",estado2);

    printf("digite sua cidade:\n");
    scanf("%s",cidade2);

    printf("digite sua população\n:");
    scanf("%d",&populacao2);

    printf("digite a quantidade de pontos turísticos:\n");
    scanf("%d",&pontos_turisticos2);

    printf("digite sua área:\n");
    scanf("%f", area2);

    printf("digite seu PIB:\n");
    scanf("%f",pib2);

    
    return 0;
   
}