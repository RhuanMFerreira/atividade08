#include <stdio.h>

int main()
{

    int numHomens = 0, numMulheres = 0;
    float somaAlturaHomens = 0, somaAlturaMulheres = 0, somaPesoHomens = 0, somaPesoMulheres = 0, altura, peso;
    char nome[50], sexo;

    for (int i = 1; i <= 10; i++)
    {
        printf("Digite o nome da pessoa %d: ", i);
        scanf("%s", nome);

        printf("Digite o sexo (M/F) da pessoa %d: ", i);
        scanf(" %c", &sexo);

        printf("Digite a altura (em metros) da pessoa %d: ", i);
        scanf("%f", &altura);

        printf("Digite o peso (em kg) da pessoa %d: ", i);
        scanf("%f", &peso);

        if (sexo == 'M' || sexo == 'm')
        {
            numHomens++;
            somaAlturaHomens += altura;
            somaPesoHomens += peso;
        }
        else if (sexo == 'F' || sexo == 'f')
        {
            numMulheres++;
            somaAlturaMulheres += altura;
            somaPesoMulheres += peso;
        }
    }

    float mediaAlturaHomens = somaAlturaHomens / numHomens;
    float mediaAlturaMulheres = somaAlturaMulheres / numMulheres;
    float mediaAlturaGrupo = (somaAlturaHomens + somaAlturaMulheres) / 10;
    float mediaPesoHomens = somaPesoHomens / numHomens;
    float mediaPesoMulheres = somaPesoMulheres / numMulheres;
    float mediaPesoGrupo = (somaPesoHomens + somaPesoMulheres) / 10;

    printf("\nNumero de homens: %d\n", numHomens);
    printf("Numero de mulheres: %d\n", numMulheres);
    printf("Altura media dos homens: %.2f metros\n", mediaAlturaHomens);
    printf("Altura media das mulheres: %.2f metros\n", mediaAlturaMulheres);
    printf("Altura media do grupo: %.2f metros\n", mediaAlturaGrupo);
    printf("Peso medio dos homens: %.2f kg\n", mediaPesoHomens);
    printf("Peso medio das mulheres: %.2f kg\n", mediaPesoMulheres);
    printf("Peso mdio do grupo: %.2f kg\n", mediaPesoGrupo);
}