#include <stdio.h>

int main() {
    int opcao, escolhaTorre, escolhaBispo, escolhaRainha, escolherCavalo;

    //menu interativo jogo de xadrez
    printf("*** Jogo de xadrez *** \n");
    printf("Escolha qual peça deseja jogar! \n");
    printf("1. Torre \n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1: {// movimentaçao da peça - torre (usando loop for)
    
            printf("\nVocê escolheu a Torre!\n");
            printf("Para que direção deseja mover a peça?\n");
            printf("1. Cima\n2. Baixo\n3. Esquerda\n4. Direita\n5. Sair do jogo\n");
            scanf("%d", &escolhaTorre);

            switch (escolhaTorre) {
            case 1:
                printf("\n Andando para cima:\n");
                for (int i = 1; i <= 5; i++) printf("Andou (%d)\n", i);
                break;
            case 2:
                printf("\nAndando para baixo:\n");
                for (int i = 1; i <= 5; i++) printf("Andou (%d)\n", i);
                break;
            case 3:
                printf("\nAndando para esquerda:\n");
                for (int i = 1; i <= 5; i++) printf("Andou (%d)\n", i);
                break;
            case 4:
                printf("\nAndando para direita:\n");
                for (int i = 1; i <= 5; i++) printf("Andou (%d)\n", i);
                break;
            case 5:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpção inválida\n");
            }
        break;
        }

    case 2: { // Movimentaçao da peça - bispo (usando loop while)
        int iBispo = 1;
    
            printf("\nVocê escolheu o Bispo!\n");
            printf("Para que direção deseja mover a peça?\n");
            printf("1. Cima-Esquerda\n2. Cima-Direita\n3. Baixo-Esquerda\n4. Baixo-Direita\n5. Sair do jogo\n");
            scanf("%d", &escolhaBispo);

            switch (escolhaBispo) {
            case 1:
                printf("\nAndando para cima-esquerda:\n");
                while (iBispo <= 7){
                    printf("Andou (%d)\n", iBispo++);
                }
                break;
            case 2:
                printf("\nAndando para cima-direita:\n");
                while (iBispo <= 7){
                    printf("Andou (%d)\n", iBispo++);
                }               
                break;
            case 3:
                printf("\nAndando para baixo-esquerda:\n");
                while (iBispo <= 7){
                    printf("Andou (%d)\n", iBispo++);
                }
                break;
            case 4:
                printf("\nAndando para baixo-direita:\n");
                while (iBispo <= 7){
                    printf("Andou (%d)\n", iBispo++);
                }
                break;
            case 5:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpção inválida\n");
            }
        break;
        }

    case 3: {// Movimentaçao da peça - rainha (usando loop do while)
        int iRainha = 1;

            printf("\nVocê escolheu a Rainha!\n");
            printf("Para que direção deseja mover a peça?\n");
            printf("1. Cima\n2. Baixo\n3. Esquerda\n4. Direita\n");
            printf("5. Cima-Esquerda\n6. Cima-Direita\n7. Baixo-Esquerda\n8. Baixo-Direita\n9. Sair do jogo\n");
            scanf("%d", &escolhaRainha);

            switch (escolhaRainha) {
            case 1:
                printf("\nAndando para cima:\n");
                do{
                printf("Andou (%d)\n", iRainha++); 
                } while (iRainha <= 7);
                break;
            case 2:
                printf("\nAndando para baixo:\n");
                do{
                printf("Andou (%d)\n", iRainha++); 
                } while (iRainha <= 7);
                break;
            case 3:
                printf("\nAndando para esquerda:\n");
                do{
                printf("Andou (%d)\n", iRainha++); 
                } while (iRainha <= 7);
                break;
            case 4:
                printf("\nAndando para direita:\n");
                do{
                printf("Andou (%d)\n", iRainha++); 
                } while (iRainha <= 7);
                break;
            case 5:
                printf("\nAndando para cima-esquerda:\n");
                do{
                printf("Andou (%d)\n", iRainha++); 
                } while (iRainha <= 7);
                break;
            case 6:
                printf("\nAndando para cima-direita:\n");
                do{
                printf("Andou (%d)\n", iRainha++); 
                } while (iRainha <= 7);
                break;
            case 7:
                printf("\nAndando para baixo-esquerda:\n");
                do{
                printf("Andou (%d)\n", iRainha++); 
                } while (iRainha <= 7);
                break;
            case 8:
                printf("\nAndando para baixo-direita:\n");
                do{
                printf("Andou (%d)\n", iRainha++); 
                } while (iRainha <= 7);
                break;
            case 9:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpção inválida\n");
            }
        break;
        }

    case 4: { // Movimentaçao da peça - bispo (usando loop while)    
            printf("\nVocê escolheu o Cavalo!\n");
            printf("Para que direção deseja mover a peça?\n");
            printf("1. Cima-Cima-Esquerda\n2. Cima-Cima-Direita\n3. Baixo-Baixo-Esquerda\n4. Baixo-baixo-Direita\n5. Sair do jogo\n");
            scanf("%d", &escolherCavalo);

            switch (escolherCavalo) {
            case 1:
                printf("\nAndando com o cavalo!\n");
            for (int i = 0; i < 2; i++){
                int repeticoes = 2 - i;
                int j = 0;
                while(j < repeticoes){
                    printf(i == 0? "Cima\n" : "Esquerda\n");
                    j++;
                }
            }
                break;
            case 2:
                printf("\nAndnado com o cavalo:\n");
                for(int i = 0; i < 2; i++){
                    int repeticoes = 2 - i;
                    int j = 0;
                    while (j < repeticoes){
                        printf(i == 0 ? "Cima\n" : "Direita\n");
                        j++;
                    }                  
                }                           
                break;
            case 3:
                printf("\nAndando com o cavalo:\n");
                for(int i = 0; i < 2; i++){
                    int repeticoes = 2 - i;
                    int j = 0;
                    while(j < repeticoes){
                        printf(i == 0 ? "Baixo\n" : "Esquerda\n");
                        j++;
                    }
                }            
                break;
            case 4:
                printf("\nAndando com o cavalo:\n");
                for(int i = 0; i < 2; i++){
                    int repeticoes = 2 - i;
                    int j = 0;
                    while(j < repeticoes){
                        printf(i == 0 ? "Baixo\n" : "Direita\n");
                        j++;
                    }
                } 
                break;
            case 5:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpção inválida\n");
            }
        break;
        }

    default:
        printf("\nOpção inválida!\n");
    }

    return 0;
}
