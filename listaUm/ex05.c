#include <stdio.h>

int main() {
    int pontos[3], i, j, temp, soma = 0;
    float media;

    for (i = 0; i < 3; i++) {
        scanf("%d", &pontos[i]);
        soma += pontos[i];
    }

    for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 3; j++) {
            if (pontos[i] < pontos[j]) {
                temp = pontos[i];
                pontos[i] = pontos[j];
                pontos[j] = temp;
            }
        }
    }

    for (i = 0; i < 3; i++) {
        printf("%d ", pontos[i]);
    }
    printf("\n");

    if (soma > 100) {
        media = soma / 3.0;
        printf("%.2f\n", media);
    } else {
        printf("Equipe desclassificada\n");
    }

    return 0;
}
