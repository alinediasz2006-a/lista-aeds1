#include <stdio.h>

int main() {
    float notas[3];
    float soma = 0.0;
    float media;
    int i;

    // Recebe as 3 notas do usuário e armazena no vetor
    for(i = 0; i < 3; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Calcula a média
    media = soma / 3;

    // Exibe a média e o resultado
    printf("\nMedia final: %.2f\n", media);

    if(media >= 6.0) {
        printf("Resultado: Aprovado!\n");
    } else {
        printf("Resultado: Reprovado.\n");
    }

    return 0;
}
