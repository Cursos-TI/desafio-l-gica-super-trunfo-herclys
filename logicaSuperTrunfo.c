#include <stdio.h>
#include <string.h>

void limparBuffer() {
    while (getchar() != '\n'); // Limpa o buffer de entrada
}

int main() {
    int codigo1, codigo2;
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    
    // Cadastro da primeira cidade
    printf("Digite o código da primeira cidade: ");
    scanf("%d", &codigo1);
    limparBuffer();

    printf("Digite o nome da primeira cidade: ");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao1);
    limparBuffer();

    // Cadastro da segunda cidade
    printf("\nDigite o código da segunda cidade: ");
    scanf("%d", &codigo2);
    limparBuffer();

    printf("Digite o nome da segunda cidade: ");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);
    limparBuffer();

    // Comparação de população
    printf("\nComparação de População:\n");
    if (populacao1 > populacao2) {
        printf("A cidade %s tem mais habitantes que a cidade %s.\n", nome1, nome2);
    } else if (populacao2 > populacao1) {
        printf("A cidade %s tem mais habitantes que a cidade %s.\n", nome2, nome1);
    } else {
        printf("As duas cidades têm a mesma população.\n");
    }

    return 0;
}