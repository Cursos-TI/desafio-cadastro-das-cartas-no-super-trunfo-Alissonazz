#include <stdio.h>

int main() {
    char estado [20];
    char codigo;
    char cidade [30];
    float populacao, area, pib;
    int turistico;

    printf ("Siga agora para o cadastro da sua primeira carta: \n");
    printf ("Qual estado? \n");
    fgets (estado, 21, stdin);

    printf ("Qual é o código do estado? \n");
    scanf ("%s", &codigo);

    printf ("Qual é a sua cidade? \n");
    fgets (cidade, 31, stdin);

    printf ("Diga a população: \n");
    scanf ("%f", &populacao);

    printf ("Diga quantos metros quadrados tem: \n");
    scanf ("%f", &area);

    printf ("Qual é o valor do pib? \n");
    scanf ("%f", &pib);

    printf ("Diga quantos pontos turisticos tem: \n");
    scanf ("%d", &turistico);

    printf ("A cidade de %s que fica no estado de %s tem o seguinte codigo: %s", cidade, estado, codigo);
    printf ("A mesma cidade citada a cima tem %f habitantes, %f metros quadrados, um pib no valor de %f$ e %d pontos turisticos", populacao, area, pib, turistico);
    return 0;
}
