#include <stdio.h>
#include <string.h>

// Definição da estrutura de dados (struct)
typedef struct {
    char nome[30];      // Nome do território
    char cor[15];       // Cor do exército dominante
    int tropas;         // Número de tropas no território
} Territorio;

int main() {
    // Vetor estático com 5 territórios já preenchidos
    Territorio territorios[5] = {
        {"Brasil", "Verde", 8},
        {"Canadá", "Vermelho", 6},
        {"Japão", "Azul", 10},
        {"Egito", "Amarelo", 5},
        {"Alemanha", "Preto", 7}
    };

    // Exibição organizada dos dados
    printf("=== ESTADO ATUAL DO MAPA - JOGO WAR ===\n");

    for (int i = 0; i < 5; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Número de tropas: %d\n", territorios[i].tropas);
    }

    printf("\nMapa exibido com sucesso!\n");

    return 0;
}