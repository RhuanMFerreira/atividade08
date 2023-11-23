#include <stdio.h>

int main()
{
    char resposta;

    do
    {
        int mes;
        int ano;
        int dias;

        printf("Digite o mes (1 a 12): ");
        scanf("%d", &mes);

        if (mes < 1 || mes > 12)
        {
            printf("Mes invalido. Tente novamente.\n");
            continue;
        }

        printf("Digite o ano: ");
        scanf("%d", &ano);

        if (ano <= 0)
        {
            printf("Ano invalido. Tente novamente.\n");
            continue;
        }

        switch (mes)
        {
        case 4:
        case 6:
        case 9:
        case 11:
            dias = 30;
            break;
        case 2:
            if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
            {
                dias = 29; // Ano bissexto
            }
            else
            {
                dias = 28;
            }
            break;
        default:
            dias = 31;
            break;
        }

        printf("O mes %d do ano %d tem %d dias.\n", mes, ano, dias);

        printf("VOCE DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');
}