#include <stdio.h>

int main() {
    
    int escolhaPeca, menuPrincipal = 1, escolhaMovimento, andarCasas, menuMovimento;
while (menuPrincipal)
{
printf("Escolha sua peça: \n\n");
printf("1. Torre\n");
printf("2. Bispo\n");
printf("3. Rainha\n");
printf("4. Cavalo\n");
printf("5. Sair do programa\n\n");
printf("Escolha: ");
scanf("%d", &escolhaPeca);
printf("\n\n");

switch (escolhaPeca)
{
case 1:

    menuMovimento = 1;

    while (menuMovimento)
    {
        printf("Você escolheu a Torre, qual o movimento você gostaria que ela fizesse?\n\n");
        printf("1. Para cima\n");
        printf("2. Para baixo\n");
        printf("3. Para esquerda\n");
        printf("4. Para direita\n");
        printf("5. Voltar\n\n");
        printf("Escolha: ");
        scanf("%d",&escolhaMovimento);
        printf("\n\n");

        switch (escolhaMovimento)
        {
        case 1:

            printf("Você escolheu para cima!\n");
            printf("Quantas casas você gostaria de andar?\n");
            printf("Faça sua escolha: ");
            scanf("%d", &andarCasas);
            printf("\n\n");

            for (; andarCasas > 0; andarCasas--)
            {
                printf("Cima\n\n");
            }

            printf("\n");

            return 0;
        
        break;
    
        case 2:

            printf("Você escolheu para baixo!\n");
            printf("Quantas casas você gostaria de andar?\n");
            printf("Faça sua escolha: ");
            scanf("%d", &andarCasas);
            printf("\n\n");

            for (; andarCasas > 0; andarCasas--)
            {
            printf("Baixo\n\n");
            }

            printf("\n");

            return 0;

        break;      

        case 3:

            printf("Você escolheu para esquerda!\n");
            printf("Quantas casas você gostaria de andar?\n");
            printf("Faça sua escolha: ");
            scanf("%d", &andarCasas);
            printf("\n\n");

            for (; andarCasas > 0; andarCasas--)
            {
            printf("Esquerda\n\n");
            }

            printf("\n");

            return 0;
        
        break;

        case 4:

            printf("Você escolheu para direita!\n");
            printf("Quantas casas você gostaria de andar?\n");
            printf("Faça sua escolha: ");
            scanf("%d", &andarCasas);
            printf("\n\n");

            for (; andarCasas > 0; andarCasas--)
            {
            printf("Direita\n\n");
            }

            printf("\n");

            return 0;
        
        break;

        case 5:

            menuMovimento = 0;

        break;

        default:

            printf("Opção inválida!\n\n");

        break;

        }
    }
    
break;

case 2:

    menuMovimento = 1;

    while (menuMovimento)
    {
        printf("Você escolheu o Bispo, qual movimento você gostaria que ele fizesse?\n\n");
        printf("1. Diagonal direita para cima\n");
        printf("2. Diagonal esquerda para cima\n");
        printf("3. Diagonal direita para baixo\n");
        printf("4. Diagonal esqueda para baixo\n");
        printf("5. Voltar\n\n");
        printf("Escolha: ");
        scanf("%d", &escolhaMovimento);
        printf("\n\n");

        switch (escolhaMovimento)
        {
        case 1:
            
            printf("Você escolheu diagonal direita para cima!\n");
            printf("Quantas casas você gostaria de andar?\n");
            printf("Faça sua escolha: ");
            scanf("%d", &andarCasas);
            printf("\n\n");

            for (; andarCasas > 0; andarCasas--)
            {
                printf("Cima\n");
                printf("Direita\n\n");
            }

            printf("\n");

            return 0;

        break;

        case 2:
            
            printf("Você escolheu diagonal esquerda para cima!\n");
            printf("Quantas casas você gostaria de andar?\n");
            printf("Faça sua escolha: ");
            scanf("%d", &andarCasas);
            printf("\n\n");

            for (; andarCasas > 0; andarCasas--)
            {
                printf("Cima\n");
                printf("Esquerda\n\n");
            }

            printf("\n");

            return 0;

        break;

        case 3:
            
            printf("Você escolheu diagonal direita para baixo!\n");
            printf("Quantas casas você gostaria de andar?\n");
            printf("Faça sua escolha: ");
            scanf("%d", &andarCasas);
            printf("\n\n");

            for (; andarCasas > 0; andarCasas--)
            {
                printf("Baixo\n");
                printf("Direita\n\n");
            }

            printf("\n");

            return 0;

        break;

        case 4:
            
            printf("Você escolheu diagonal esquerda para baixo!\n");
            printf("Quantas casas você gostaria de andar?\n");
            printf("Faça sua escolha: ");
            scanf("%d", &andarCasas);
            printf("\n\n");

            for (; andarCasas > 0; andarCasas--)
            {
                printf("Baixo\n");
                printf("Esquerda\n\n");
            }

            printf("\n");

            return 0;

        break;

        case 5:

            menuMovimento = 0;
        
        default:

            printf("Opção inválida!\n\n");

        break;
        }

    }

break;

case 3:

    menuMovimento = 1;

    while (menuMovimento)
    {
        printf("Você escolheu a Rainha, qual movimento você gostaria que ela fizesse?\n\n");
        printf("1. Para cima\n");
        printf("2. Para baixo\n");
        printf("3. Para esquerda\n");
        printf("4. Para direita\n");
        printf("5. Diagonal direita para cima\n");
        printf("6. Diagonal esquerda para cima\n");
        printf("7. Diagonal direita para baixo\n");
        printf("8. Diagonal esqueda para baixo\n");
        printf("9. Voltar\n\n");
        printf("Escolha: ");
        scanf("%d", &escolhaMovimento);
        printf("\n\n");
        
        switch (escolhaMovimento)
        {
        case 1:

            printf("Você escolheu para cima!\n");
            printf("Quantas casas você gostaria de andar?\n");
            printf("Faça sua escolha: ");
            scanf("%d", &andarCasas);
            printf("\n\n");

            for (; andarCasas > 0; andarCasas--)
            {
                printf("Cima\n\n");
            }

            printf("\n");

            return 0;
                    
        break;

        case 2:

            printf("Você escolheu para baixo!\n");
            printf("Quantas casas você gostaria de andar?\n");
            printf("Faça sua escolha: ");
            scanf("%d", &andarCasas);
            printf("\n\n");

            for (; andarCasas > 0; andarCasas--)
            {
                printf("Baixo\n\n");
            }

            printf("\n");

            return 0;
        break;
        
        case 3:

            printf("Você escolheu para esquerda!\n");
            printf("Quantas casas você gostaria de andar?\n");
            printf("Faça sua escolha: ");
            scanf("%d", &andarCasas);
            printf("\n\n");

            for (; andarCasas > 0; andarCasas--)
            {
                printf("Esquerda\n\n");
            }

            printf("\n");

            return 0;
        
        break;

        case 4:

            printf("Você escolheu para direita!\n");
            printf("Quantas casas você gostaria de andar?\n");
            printf("Faça sua escolha: ");
            scanf("%d", &andarCasas);
            printf("\n\n");

            for (; andarCasas > 0; andarCasas--)
            {
                printf("Direita\n\n");
            }

            printf("\n");

            return 0;
        
        break;

        case 5:
            
            printf("Você escolheu diagonal direita para cima!\n");
            printf("Quantas casas você gostaria de andar?\n");
            printf("Faça sua escolha: ");
            scanf("%d", &andarCasas);
            printf("\n\n");

            for (; andarCasas > 0; andarCasas--)
            {
                printf("Cima\n");
                printf("Direita\n\n");
            }

            printf("\n");

            return 0;

        break;

        case 6:
            
            printf("Você escolheu diagonal esquerda para cima!\n");
            printf("Quantas casas você gostaria de andar?\n");
            printf("Faça sua escolha: ");
            scanf("%d", &andarCasas);
            printf("\n\n");

            for (; andarCasas > 0; andarCasas--)
            {
                printf("Cima\n");
                printf("Esquerda\n\n");
            }

            printf("\n");

            return 0;

        break;

        case 7:
            
            printf("Você escolheu diagonal direita para baixo!\n");
            printf("Quantas casas você gostaria de andar?\n");
            printf("Faça sua escolha: ");
            scanf("%d", &andarCasas);
            printf("\n\n");

            for (; andarCasas > 0; andarCasas--)
            {
                printf("Baixo\n");
                printf("Direita\n\n");
            }

            printf("\n");

            return 0;

        break;

        case 8:
            
            printf("Você escolheu diagonal esquerda para baixo!\n");
            printf("Quantas casas você gostaria de andar?\n");
            printf("Faça sua escolha: ");
            scanf("%d", &andarCasas);
            printf("\n\n");

            for (; andarCasas > 0; andarCasas--)
            {
                printf("Baixo\n");
                printf("Esquerda\n\n");
            }

            printf("\n");

            return 0;

        break;

        case 9:
            
            menuMovimento = 0;

        break;

        default:
            printf("Opção inválida!\n\n");
        break;
        }
    }
    

break;

case 4:

    menuMovimento = 1;

    while (menuMovimento)
    {
        printf("Você escolheu o Cavalo, qual movimento você gostaria que ele fizesse?\n\n");
        printf("1. Dois para cima e um para esquerda\n");
        printf("2. Dois para cima e um para direita\n");
        printf("3. Dois para baixo e um para esquerda\n");
        printf("4. Dois para baixo e um para direita\n");
        printf("5. Dois para esquerda e um para cima\n");
        printf("6. Dois para esquerda e um para baixo\n");
        printf("7. Dois para direita e um para cima\n");
        printf("8. Dois para direita e um para baixo\n");
        printf("9. Voltar\n\n");
        printf("Escolha: ");
        scanf("%d", &escolhaMovimento);
        printf("\n\n");

        switch (escolhaMovimento)
        {
        case 1:
        {
            int cavalo1Casa = 1;
            
            while (cavalo1Casa--)
            {
                for (int cavalo2Casa = 1; cavalo2Casa >= 0; cavalo2Casa--)
                {
                    printf("Cima\n");
                }
                printf("Esquerda\n\n");
            }
            
            return 0;
        }
        break;

        case 2:
        {
            int cavalo1Casa = 1;
            
            while (cavalo1Casa--)
            {
                for (int cavalo2Casa = 1; cavalo2Casa >= 0; cavalo2Casa--)
                {
                    printf("Cima\n");
                }
                printf("Direita\n\n");
            }
            
            return 0;
        }
        break;

        case 3:
        {
            int cavalo1Casa = 1;
            
            while (cavalo1Casa--)
            {
                for (int cavalo2Casa = 1; cavalo2Casa >= 0; cavalo2Casa--)
                {
                    printf("Baixo\n");
                }
                printf("Esquerda\n\n");
            }
            
            return 0;
        }
        break;

        case 4:
        {
            int cavalo1Casa = 1;
            
            while (cavalo1Casa--)
            {
                for (int cavalo2Casa = 1; cavalo2Casa >= 0; cavalo2Casa--)
                {
                    printf("Baixo\n");
                }
                printf("Direita\n\n");
            }
            
            return 0;
        }
        break;

        case 5:
        {
            int cavalo1Casa = 1;
            
            while (cavalo1Casa--)
            {
                for (int cavalo2Casa = 1; cavalo2Casa >= 0; cavalo2Casa--)
                {
                    printf("Esquerda\n");
                }
                printf("Cima\n\n");
            }
            
            return 0;
        }
        break;

        case 6:
        {
            int cavalo1Casa = 1;
            
            while (cavalo1Casa--)
            {
                for (int cavalo2Casa = 1; cavalo2Casa >= 0; cavalo2Casa--)
                {
                    printf("Esquerda\n");
                }
                printf("Baixo\n\n");
            }
            
            return 0;
        }
        break;

        case 7:
        {
            int cavalo1Casa = 1;
            
            while (cavalo1Casa--)
            {
                for (int cavalo2Casa = 1; cavalo2Casa >= 0; cavalo2Casa--)
                {
                    printf("Direita\n");
                }
                printf("Cima\n\n");
            }
            
            return 0;
        }
        break;

        case 8:
        {
            int cavalo1Casa = 1;
            
            while (cavalo1Casa--)
            {
                for (int cavalo2Casa = 1; cavalo2Casa >= 0; cavalo2Casa--)
                {
                    printf("Direita\n");
                }
                printf("Baixo\n\n");
            }
            
            return 0;
        }
        break;

        case 9:

            menuMovimento = 0;
        
        default:

            printf("Opção inválida\n\n");

        break;
        }
    }
    



break;
    
case 5:
printf("Saiu do programa!\n");
menuPrincipal = 0;
break;
    
default:
printf("Opção inválida, voltando ao menu principal...\n\n");
break;
}
}
}