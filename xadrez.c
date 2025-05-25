#include <stdio.h> 

void MoverDireita(int casas) {
    if (casas > 0) {
        printf("Direita \n");
        MoverDireita(casas - 1);
    }
}

void MoverEsquerda(int casas) {
    if (casas > 0) {
        printf("Esquerda \n");
        MoverEsquerda(casas - 1);
    }
}

void MoverCima(int casas) {
    if (casas > 0) {
        printf("Cima \n");
        MoverCima(casas - 1);
    }
}

void MoverBaixo(int casas) {
    if (casas > 0) {
        printf("Baixo \n");
        MoverBaixo(casas - 1);
    }
}

void MoverCimaEsquerda(int casas) {
    if (casas > 0) {
        MoverCimaEsquerda(casas - 1);
        printf("Diagonal, CIMA e ESQUERDA \n");
    }
}

void MoverCimaDireita(int casas) {
    if (casas > 0) {
        MoverCimaDireita(casas - 1);
        printf("Diagonal, CIMA e DIREITA \n"); 
    }
}

void MoverBaixoEsquerda(int casas) {
    if (casas > 0) {
        MoverCimaEsquerda(casas - 1);
        printf("Diagonal, CIMA e ESQUERDA \n");
    }
}

void MoverBaixoDireita(int casas) {
    if (casas > 0) {
        MoverCimaDireita(casas - 1);
        printf("Diagonal, CIMA e DIREITA \n"); 
    }
}


int main() {
    
    // Declaraçao de variáveis
    char jogar;
    char peca, direcao;
    int casas = 0;
    int i = 0;
    int direcaoMultipla;
    int cavmov1 = 0;
    int cavmov2 = 0;
    int Cx;
    int Ccy;

    // Exibe o menu de opções
    printf("### Jogo de Xadrez ###\n"); 
    printf("Escolha qual peça você quer mover -\n");
    printf("[T] - Torre\n");
    printf("[B] - Bispo\n");
    printf("[R] - Rainha\n");
    printf("[C] - Cavalo\n");
    scanf(" %c", &peca);
    
    // Verifica qual peça foi escolhida
    switch (peca)
    {

    // Movimentaçao da Torre
    case 'T':
    case 't':
        printf("A [Torre] Foi escolhida\n");
        printf("A torre move-se em linha reta (horizontal ou vertical).\n");
        printf("Digite [C] para CIMA, [B] para BAIXO, [D] para DIREITA, [E] para ESQUERDA -> ");
        scanf(" %c", &direcao);
        printf("Selecione o numero de casas -> ");
        scanf("%d", &casas);
        printf("Ok!\n");
        
        // Movimentaçao da Torre para cima
        if (direcao == 'C' || direcao == 'c') {
            printf("### Torre, vá %d casas para CIMA ###\n", casas);
            MoverCima(casas);
        }
        // Movimentaçao da Torre para baixo
        if (direcao == 'B' || direcao == 'b') {
            printf("### Torre, vá %d casas para BAIXO ###\n", casas);
            MoverBaixo(casas);
        }        
        // Movimentacao da Torre para direita
        if (direcao == 'D' || direcao == 'd') {
            printf("### Torre, vá %d casas para DIREITA ###\n", casas);
            MoverDireita(casas);
        }  
        // Movimentaçao da Torre para esquerda
        if (direcao == 'E' || direcao == 'd') {
            printf("### Torre, vá %d casas para ESQUERDA ###\n", casas);
            MoverEsquerda(casas);
        }   
        break;

    // Movimentaçao do Bispo
    case 'B':
    case 'b':
        printf("O [Bispo] Foi escolhido\n");
        printf("O bispo move-se em diagonal.\n");
        printf("Digite [1] para CIMA e ESQUERDA \n[2] para CIMA e DIREITA \n[3] para BAIXO e ESQUERDA \n[4] para Baixo e DIREITA -> ");
        scanf("%d", &direcaoMultipla);
        printf("Selecione o numero de casas -> ");
        scanf("%d", &casas);
        printf("Ok!\n");
        
        if (direcaoMultipla == 1) {
            printf("### Bispo, vá %d casas na diagonal para CIMA e ESQUERDA ###\n", casas);
            MoverCimaEsquerda(casas);
        }
        if (direcaoMultipla == 2) {
            printf("### Bispo, vá %d casas na diagonal para CIMA e DIREITA ###\n", casas);
            MoverCimaDireita(casas);
        }
         if (direcaoMultipla == 3) {
            printf("### Bispo, vá %d casas na diagonal para BAIXO e ESQUERDA ###\n", casas);
            MoverBaixoEsquerda(casas);
        }
        if (direcaoMultipla == 4) {
            printf("### Bispo, vá %d casas na diagonal para BAIXO e DIREITA ###\n", casas);
            MoverBaixoDireita(casas);
        }
        break;

    // Movimentaçao da Rainha
    case 'R':
    case 'r':
        printf("A [Rainha] Foi escolhida\n");
        printf("A rainha move-se em linha reta (horizontal ou vertical) ou em diagonal.\n");
        printf("Digite \n[1] para CIMA \n[2] para BAIXO \n[3] para ESQUERDA \n[4] para DIREITA \n");
        printf("[5] para CIMA e ESQUERDA \n[6] para CIMA e DIREITA \n[7] para BAIXO e ESQUERDA \n[8] para BAIXO e DIREITA ->  \n");
        scanf("%d", &direcaoMultipla);
        printf("Selecione o numero de casas -> ");
        scanf("%d", &casas);
        printf("Ok!\n\n");

        if (direcaoMultipla == 1) {
            printf("### Rainha, vá %d casas para CIMA ###\n", casas);
            MoverCima(casas);
        }
        if (direcaoMultipla == 2) {
            printf("### Rainha, vá %d casas para BAIXO ###\n", casas);
            MoverBaixo(casas);
        } 
        if (direcaoMultipla == 3) {
            printf("### Rainha, vá %d casas para ESQUERDA ###\n", casas);
            MoverEsquerda(casas);
        }
        if (direcaoMultipla == 4) {
            printf("### Rainha, vá %d casas para DIREITA ###\n", casas);
            MoverDireita(casas);
        }    
        if (direcaoMultipla == 5) {
            printf("### Rainha, vá %d casas na diagonal para CIMA e ESQUERDA ###\n", casas);
            MoverCimaEsquerda(casas);
        }
        if (direcaoMultipla == 6) {
            printf("### Rainha, vá %d casas na diagonal para CIMA e DIREITA ###\n", casas);
            MoverCimaDireita(casas);
        }    
        if (direcaoMultipla == 7) {
            printf("### Rainha, vá %d casas na diagonal para BAIXO e ESQUERDA ###\n", casas);
            MoverBaixoEsquerda(casas);
        }
        if (direcaoMultipla == 8) {
            printf("### Rainha, vá %d casas na diagonal para BAIXO e DIREITA ###\n", casas);
            MoverBaixoDireita(casas);
        }       
        break;
    
    // Movimentaçao do Cavalo
    case 'C':
    case 'c':
        printf("O [Cavalo] Foi escolhido\n");
        printf("O cavalo move-se em L (duas casas em uma direção e uma casa em outra).\n");
        printf("Digite [D] para BAIXO e DIREITA ou [E] para BAIXO e ESQUERDA -> ");
        scanf(" %c", &direcao);
        printf("Ok!\n");
        printf("[Cavalo] vá para %c !\n", direcao);
        if (direcao == 'D' || direcao == 'd') {
            printf("[Cavalo] vá para BAIXO e DIREITA!\n");
            for (i = 0; i < 1;) { // Enquanto i for menor que 1 o comando será executado
                int j = 0;
                while (j < 2) { // O cavalo se move duas casas para a baixo
                    printf("Baixo\n");
                    j++;
                    }
                printf("Direita\n");
                i++;
            }
        }
        if (direcao == 'E' || direcao == 'e') {
            printf("[Cavalo] vá para BAIXO e ESQUERDA!\n");
            for (i = 0; i < 1;) { // Enquanto i for menor que 1 o comando será executado
                int j = 0;
                while (j < 2) { // O cavalo se move duas casas para a baixo
                    printf("Baixo\n");
                    j++;
                    }
                printf("Esquerda\n");
                i++;
            }
        }
        break;

    // Caso a peça não seja reconhecida
    default:
        printf("Peça inválida!\n");
        break;      
    }

    return 0;
}