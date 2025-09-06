#include <stdio.h>

int main (){    

    char estado [50];   
    char Codigodacarta [50];
    char nomedacidade [50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos ;

    printf ("digite o estado: \n");
    scanf ("%s", &estado);

    printf ("digite o codigo da carta: \n");
    scanf ("%s", &Codigodacarta);

    printf ("nome da cidade: \n");
    scanf ("%s", &nomedacidade);

    printf ("digiteapopulacao: \n");
    scanf ("%d", &populacao);

    printf ("digite a area: \n");
    scanf ("%f", &area);

    printf ("digite o pib: \n");
    scanf ("%f", &pib);

    printf ("quantos pontos turisticos: \n");
    scanf ("%d", pontosturisticos);

return 0;


}
