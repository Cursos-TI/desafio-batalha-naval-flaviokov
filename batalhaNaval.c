#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define LINHA 5
#define COLUNA 5


int posicionaNavioHorizontal(int i, int j) {
   return (i == 0 && j == 2) || (i == 0 && j == 3);
}

int posicionaNavioVertical(int i, int j) {
   return (i == 2 && j == 1) || (i == 3 && j == 1);
}


int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

   int matriz[LINHA][COLUNA];


    //Inicializa com 0
   for (int i = 0; i < LINHA; i++){
      for (int j = 0; j < COLUNA; j++){
        matriz[i][j] = 0;
      }
   }

   
    for (int i = 0; i < LINHA; i++) {     
        for (int j = 0; j < COLUNA; j++) {  
         if(posicionaNavioHorizontal(i,j) || posicionaNavioVertical(i,j)) {
            matriz[i][j] = 1;
         }

         if(matriz[i][j] == 1) {
            printf("[%d]", matriz[i][j]);
         }else {
            printf(" %d ", matriz[i][j]);
         }
          
        } 
        printf(" \n");
    }
    printf("\n");
    printf("Parte do Navio posicionado na casa [%d %d] com valor 1\n\n",0,2);

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
