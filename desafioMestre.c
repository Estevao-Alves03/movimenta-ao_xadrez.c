#include <stdio.h>

//funçao recursiva torre
void moverTorre(int casas, const char* direcao){
    if (casas > 0){
        moverTorre(casas - 1, direcao);
        printf("%s \n", direcao);
    }    
}
// funçao recursiva bispo
void moverBispo(int casas, const char* direcao){
    if(casas > 0){
        moverBispo(casas -1, direcao);
        printf("%s \n", direcao);
    }
}
// funçao recursiva rainha
void moverRainha(int casas, const char* direcao){
    if(casas > 0){
        moverRainha(casas - 1, direcao);
        printf("%s \n", direcao);
    }
}



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
    
    //variavel fixa que recebe valor de casas a serem andadas
    int movTorre = 5;
    int movBispo = 6;
    int movRainha = 7;
    
    

    switch (opcao) {
    case 1: // movimentaçao da peça - torre (usando loop for)

    
            printf("\nVocê escolheu a Torre!\n");
            printf("Para que direção deseja mover a peça?\n");
            printf("1. Cima\n2. Baixo\n3. Esquerda\n4. Direita\n5. Sair do jogo\n");
            scanf("%d", &escolhaTorre);
            printf("Movimentando a torre \n");

            switch (escolhaTorre) {
            //usando a funçao recursiva para movimentar a peça conforme posiçao escolhia
            case 1:
                moverTorre(movTorre, "Cima");
                break;
            case 2:
                moverTorre(movTorre, "Baixo");
                break;
            case 3:
                moverTorre(movTorre, "Esquerda");
                break;
            case 4:
                moverTorre(movTorre, "Direita");
                break;
            case 5:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpção inválida\n");
            }
        break;

    case 2: // Movimentaçao da peça - bispo (usando loop while)

    
            printf("\nVocê escolheu o Bispo!\n");
            printf("Para que direção deseja mover a peça?\n");
            printf("1. Cima-Esquerda\n2. Cima-Direita\n3. Baixo-Esquerda\n4. Baixo-Direita\n5. Sair do jogo\n");
            scanf("%d", &escolhaBispo);
            printf("Movimentando o bispo \n");

            switch (escolhaBispo) {
            //usando a funçao recursiva para movimentar a peça conforme posiçao escolhia
            case 1:
                moverBispo(movBispo, "Cima - Esquerda");
                break;
            case 2:
                moverBispo(movBispo, "Cima - Direita");           
                break;
            case 3:
                moverBispo(movBispo, "Baixo - Esquerda");
                break;
            case 4:
                moverBispo(movBispo, "Baixo - Direita");
                break;
            case 5:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpção inválida\n");
            }
        break;

    case 3: // Movimentaçao da peça - rainha (usando loop do while)


            printf("\nVocê escolheu a Rainha!\n");
            printf("Para que direção deseja mover a peça?\n");
            printf("1. Cima\n2. Baixo\n3. Esquerda\n4. Direita\n");
            printf("5. Cima-Esquerda\n6. Cima-Direita\n7. Baixo-Esquerda\n8. Baixo-Direita\n9. Sair do jogo\n");
            scanf("%d", &escolhaRainha);
            printf("Movimentando a Rainha \n");

            switch (escolhaRainha) {
            //usando a funçao recursiva para movimentar a peça conforme posiçao escolhia
            case 1:
                moverBispo(movRainha, "Cima");
                break;
            case 2:
                moverBispo(movRainha, "Baixo");
                break;
            case 3:
                moverBispo(movRainha, "Esquerda");
                break;
            case 4:
                moverBispo(movRainha, "Direita");
                break;
            case 5:
                moverBispo(movRainha, "Cima - Esquerda");
                break;
            case 6:
                moverBispo(movRainha, "Cima - Direita");
                break;
            case 7:
                moverBispo(movRainha, "Baixo - Esquerda");
                break;
            case 8:
                moverBispo(movRainha, "Baixo - Direita");
                break;
            case 9:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpção inválida\n");
            }
        break;

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
