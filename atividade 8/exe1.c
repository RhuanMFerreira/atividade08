#include <stdio.h>

main()
{
    int idade, total_respostas_otimo = 0;
    int total_respostas_bom = 0;
    int total_respostas_regular = 0;
    int total_respostas_ruim = 0;
    int total_respostas_pessimo = 0;
    int maior_idade_otimo = 0;
    int maior_idade_ruim = 0;
    int soma_idade_ruim = 0;
    int total_pessoas_ruim = 0;

    char opiniao;

    int total_entrevistados = 0;

    while (total_entrevistados < 100)
    {
        printf("\nEntrevistado %d:\n", total_entrevistados + 1);

        printf("\nIdade: ");
        scanf("%d", &idade);

        printf("\nOpiniao (A/B/C/D/E): ");
        scanf(" %c", &opiniao);

        switch (opiniao)
        {
        case 'A':
            total_respostas_otimo++;
            if (idade > maior_idade_otimo)
            {
                maior_idade_otimo = idade;
            }
            break;
        case 'B':
            total_respostas_bom++;
            break;
        case 'C':
            total_respostas_regular++;
            break;
        case 'D':
            total_respostas_ruim++;
            soma_idade_ruim += idade;
            total_pessoas_ruim++;
            if (idade > maior_idade_ruim)
            {
                maior_idade_ruim = idade;
            }
            break;
        case 'E':
            total_respostas_pessimo++;
            if (idade > maior_idade_ruim)
            {
                maior_idade_ruim = idade;
            }
            break;
        default:
            printf("Opiniao invalida. Tente novamente.\n");
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

    double diferenca_percentual = ((double)total_respostas_bom / total_entrevistados - (double)total_respostas_regular / total_entrevistados) * 100;
    double media_idade_ruim = total_pessoas_ruim > 0 ? (double)soma_idade_ruim / total_pessoas_ruim : 0;
    double percentagem_pessimo = ((double)total_respostas_pessimo / total_entrevistados) * 100;
    int diferenca_idade = maior_idade_otimo - maior_idade_ruim;

    printf("\nResultados:\n");
    printf("Quantidade de respostas Otimo: %d\n", total_respostas_otimo);
    printf("Diferença percentual entre Bom e Regular: %.2f%%\n", diferenca_percentual);
    printf("Media de idade das pessoas que responderam Ruim: %.2f\n", media_idade_ruim);
    printf("Percentagem de respostas Pessimo: %.2f%% (Maior idade: %d)\n", percentagem_pessimo, maior_idade_ruim);
    printf("Diferença de idade entre a maior idade que respondeu Otimo e Ruim: %d\n", diferenca_idade);
}