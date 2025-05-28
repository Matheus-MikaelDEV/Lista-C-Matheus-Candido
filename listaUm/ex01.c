#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, soma;

    printf("Digite o primeiro número:\n");
    scanf("%d", &num1);
    printf("Digite o segundo número:\n");
    scanf("%d", &num2);

    soma = num1 + num2;

    if (soma > 20) {
        soma += 8;
    }else {
        soma -= 5;
    }

    printf("%d\n", soma);

    return 0;
}