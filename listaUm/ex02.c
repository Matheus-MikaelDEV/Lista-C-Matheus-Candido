#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");ex02.c

    int num1;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    if (num1 >= 20 && num1 <= 50) {
        printf("O número está entre 20 e 50.");
    }else {
        printf("Não está entre 20 e 50.");
    }

    return 0;
}