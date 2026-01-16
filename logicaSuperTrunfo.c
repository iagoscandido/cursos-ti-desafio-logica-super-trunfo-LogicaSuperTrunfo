#include <stdio.h>
#include <string.h>

typedef struct
{
    int number;
    char state[3];
    char code[4];
    char city[33];
    int population;
    float area;
    float pib;
    int tourist_attractions;
    float population_density;
    float pib_per_capta;
    float super_power;
} CartasSuperTrunfo;

void print_card_winner(CartasSuperTrunfo c)
{
    printf("Resultado: Carta %d (%s) venceu!\n", c.number, c.city);
}

int main()
{
    CartasSuperTrunfo c1 = {
        .number = 1,
        .state = "SP",
        .code = "A01",
        .city = "São Paulo",
        .population = 12325000,
        .area = 1521.11,
        .pib = 699.28,
        .tourist_attractions = 50};

    CartasSuperTrunfo c2 = {
        .number = 2,
        .state = "RJ",
        .code = "B02",
        .city = "Rio de Janeiro",
        .population = 6748000,
        .area = 1200.25,
        .pib = 300.50,
        .tourist_attractions = 30};

    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta %d - %s(%s): %d\n", c1.number, c1.city, c1.state, c1.population);
    printf("Carta %d - %s(%s): %d\n", c2.number, c2.city, c2.state, c2.population);
    if (c1.population > c2.population)
    {
        print_card_winner(c1);
    }
    else
    {
        print_card_winner(c2);
    }

    return 0;
}
