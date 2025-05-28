#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Qual a sua idade?: ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Você é menor de idade\n");
    }
    else if (idade > 65) {
        printf("Você tem mais de 65 anos\n");
    }
    else {
        printf("Você é maior de idade\n");
    }

    return 0;
}