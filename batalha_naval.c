#include <stdio.h> 

int main() {
    int tabuleiro[10][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

    int habilidade_cone[5][5] = {{0, 0, 0, 0, 0},
                                 {0, 0, 1, 0, 0},
                                 {0, 1, 1, 1, 0},
                                 {1, 1, 1, 1, 1},
                                 {0, 0, 0, 0, 0}};
    
    int habilidade_cruz[5][5] = {{0, 0, 1, 0, 0},
                                 {0, 0, 1, 0, 0},
                                 {1, 1, 1, 1, 1},
                                 {0, 0, 1, 0, 0},
                                 {0, 0, 1, 0, 0}};
    
    int habilidade_octaedro[5][5] = {{0, 0, 1, 0, 0},
                                     {0, 1, 1, 1, 0},
                                     {1, 1, 1, 1, 1},
                                     {0, 1, 1, 1, 0},
                                     {0, 0, 1, 0, 0}};

    int x_cone = 2, y_cone = 2;
    int x_cruz = 5, y_cruz = 5;      
    int x_octaedro = 7, y_octaedro = 7; 

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int tabX = x_cone + i - 2;
            int tabY = y_cone + j - 2; 
            if (tabX >= 0 && tabX < 10 && tabY >= 0 && tabY < 10 && habilidade_cone[i][j] == 1) {
                tabuleiro[tabX][tabY] = 1;  
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int tabX = x_cruz + i - 2; 
            int tabY = y_cruz + j - 2;
            if (tabX >= 0 && tabX < 10 && tabY >= 0 && tabY < 10 && habilidade_cruz[i][j] == 1) {
                tabuleiro[tabX][tabY] = 2; 
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int tabX = x_octaedro + i - 2;
            int tabY = y_octaedro + j - 2; 
            if (tabX >= 0 && tabX < 10 && tabY >= 0 && tabY < 10 && habilidade_octaedro[i][j] == 1) {
                tabuleiro[tabX][tabY] = 3; 
            }
        }
    }

    printf("   A B C D E F G H I J\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); 
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}