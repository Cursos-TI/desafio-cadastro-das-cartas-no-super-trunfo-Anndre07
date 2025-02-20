#include <stdio.h>

// Estrutura para armazenar as informações da carta
typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

int main() {
    Carta cartas[2] = {
        {'A', "A01", "São Paulo", 12325000, 1521.11, 699.28, 50},
        {'B', "B02", "Rio de Janeiro", 6748000, 1200.25, 300.50, 30}
    };

    printf("\nCartas cadastradas:\n");
    for (int i = 0; i < 2; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Codigo: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].nomeCidade);
        printf("Populacao: %d\n", cartas[i].populacao);
        printf("Area: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhoes de reais\n", cartas[i].pib);
        printf("Numero de Pontos Turisticos: %d\n", cartas[i].pontosTuristicos);
    }

    return 0;
}
