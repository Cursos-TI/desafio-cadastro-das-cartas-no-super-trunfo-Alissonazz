#include <stdio.h>

int main() {
    char estado [25];
    char codigo [25];
    char cidade [25];
    char estado2 [25];
    char codigo2 [25];
    char cidade2 [25];
    float populacao, area, pib, populacao2, area2, pib2, pibpc, pibpc2, densidadep, densidadep2;
    int turistico, turistico2;

    printf ("Siga agora para o cadastro da sua primeira carta: \n");
    printf ("Em qual estado você vive? \n");
    fgets (estado, 21, stdin);

    printf ("Qual é o código do estado? \n");
    scanf ("%s", &codigo);

    fgetc(stdin);
    printf ("Qual é a sua cidade? \n"); 
    fgets (cidade, 21, stdin);

    printf ("Diga a população: \n");
    scanf ("%f", &populacao);

    printf ("Diga quantos metros quadrados tem: \n");
    scanf ("%f", &area);

    printf ("Qual é o valor do pib? \n");
    scanf ("%f", &pib);

    printf ("Diga quantos pontos turisticos tem: \n");
    scanf ("%d", &turistico);
    pibpc = (float) pib / populacao;
    densidadep = (float) populacao / area;

    printf ("A cidade de %s, estado de %s, tem o seguinte codigo: %s \n", cidade, estado, codigo);
    printf ("A mesma cidade citada a cima tem %3.f habitantes, %3.f metros quadrados, um pib no valor de %2.f$ e %d pontos turisticos.\n", populacao, area, pib, turistico);
    printf (" De acordo com esses dados, o pib per capita dessa cidade é de %2.f e a densidade populacional é de %2.f.\n", pibpc, densidadep);
    printf ("Começaremos agora o cadastro da sua segunda carta:\n");
    
    fgetc(stdin);
    printf ("Em qual estado você vive? \n");
    fgets (estado2, 21, stdin);

    printf ("Qual é o código do estado? \n");
    scanf ("%s", &codigo2);
    
    fgetc(stdin);
    printf ("Qual é a sua cidade? \n"); 
    fgets (cidade2, 21, stdin);

    printf ("Diga a população: \n");
    scanf ("%f", &populacao2);

    printf ("Diga quantos metros quadrados tem: \n");
    scanf ("%f", &area2);

    printf ("Qual é o valor do pib? \n");
    scanf ("%f", &pib2);

    printf ("Diga quantos pontos turisticos tem: \n");
    scanf ("%d", &turistico2);
    pibpc2 = (float) pib2 / populacao2;
    densidadep2 = (float) populacao2 / area2;

    printf (" A cidade de %s que fica no estado de %s tem o seguinte codigo: %s \n", cidade2, estado2, codigo2);
    printf ("A mesma cidade citada a cima tem %f habitantes, %f metros quadrados, um pib no valor de %f$ e %d pontos turisticos.\n", populacao2, area2, pib2, turistico2);
    printf (" De acordo com esses dados, o pib per capita dessa cidade é de %2.f e a densidade populacional é de %2.f.\n", pibpc2, densidadep2);
    
    return 0;

}
