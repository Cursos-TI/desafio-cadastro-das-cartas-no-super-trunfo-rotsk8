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
    scanf("%s",&codigo1);

    printf("digite seu Estado:\n");
    scanf("%s",&estado1);

    printf("digite sua Cidade:\n");
    scanf("%s",&cidade1);

    printf("digite sua População:\n");
    scanf("%d",&populacao1);

    printf("digite a quantidade de pontos turísticos:\n");
    scanf("%d",&pontos_turisticos1);

    printf("digite o tamanho da sua Área:\n");
    scanf("%f",&area1);

    printf("digite a quantidade do seu PIB:\n");
    scanf("%f",&pib1);

    return 0;
   
}