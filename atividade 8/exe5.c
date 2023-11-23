#include <stdio.h>

int main()
{
    char nomes[300][50];
    int idades[300];
    char sexos[300];
    char votos[300][50];
    int contagem_votos[5] = {0};
    int total_entrevistados = 0;

    while (total_entrevistados < 300)
    {
        printf("Entrevistado %d:\n", total_entrevistados + 1);

        printf("Nome: ");
        scanf("%s", nomes[total_entrevistados]);

        printf("Idade (maior que 12 anos): ");
        scanf("%d", &idades[total_entrevistados]);

        if (idades[total_entrevistados] <= 12)
        {
            printf("A idade deve ser maior que 12 anos. Tente novamente.\n");
            continue;
        }

        printf("Sexo (M/F): ");
        scanf(" %c", &sexos[total_entrevistados]);

        if (sexos[total_entrevistados] != 'M' && sexos[total_entrevistados] != 'F')
        {
            printf("Sexo inválido. Tente novamente.\n");
            continue;
        }

        printf("Voto (Marta, Cristiane, Formiga, Andressa, Bia): ");
        scanf("%s", votos[total_entrevistados]);

        if (votos[total_entrevistados][0] == 'M' && votos[total_entrevistados][1] == 'a' && votos[total_entrevistados][2] == 'r' && votos[total_entrevistados][3] == 't' && votos[total_entrevistados][4] == 'a' && votos[total_entrevistados][5] == '\0')
        {
            contagem_votos[0]++;
        }
        else if (votos[total_entrevistados][0] == 'C' && votos[total_entrevistados][1] == 'r' && votos[total_entrevistados][2] == 'i' && votos[total_entrevistados][3] == 's' && votos[total_entrevistados][4] == 't' && votos[total_entrevistados][5] == 'i' && votos[total_entrevistados][6] == 'a' && votos[total_entrevistados][7] == 'n' && votos[total_entrevistados][8] == 'e' && votos[total_entrevistados][9] == '\0')
        {
            contagem_votos[1]++;
        }
        else if (votos[total_entrevistados][0] == 'F' && votos[total_entrevistados][1] == 'o' && votos[total_entrevistados][2] == 'r' && votos[total_entrevistados][3] == 'm' && votos[total_entrevistados][4] == 'i' && votos[total_entrevistados][5] == 'g' && votos[total_entrevistados][6] == 'a' && votos[total_entrevistados][7] == '\0')
        {
            contagem_votos[2]++;
        }
        else if (votos[total_entrevistados][0] == 'A' && votos[total_entrevistados][1] == 'n' && votos[total_entrevistados][2] == 'd' && votos[total_entrevistados][3] == 'r' && votos[total_entrevistados][4] == 'e' && votos[total_entrevistados][5] == 's' && votos[total_entrevistados][6] == 's' && votos[total_entrevistados][7] == 'a' && votos[total_entrevistados][8] == '\0')
        {
            contagem_votos[3]++;
        }
        else if (votos[total_entrevistados][0] == 'B' && votos[total_entrevistados][1] == 'i' && votos[total_entrevistados][2] == 'a' && votos[total_entrevistados][3] == '\0')
        {
            contagem_votos[4]++;
        }
        else
        {
            printf("Voto invalido. Tente novamente.\n");
            continue;
        }

        total_entrevistados++;

        char continuar;
        printf("Deseja continuar a pesquisa? (S/N): ");
        scanf(" %c", &continuar);
        if (continuar != 'S' && continuar != 's')
        {
            break;
        }
    }

    return 0;
}