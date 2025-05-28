#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    char nome[100];
    int idade;

    printf("Qual o seu nome: ");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Qual sua idade?: ");
    scanf("%d", &idade);

    if (idade <= 10) {
        printf("%s, você terá de pagar R$30.00\n", nome);
    } else if (idade <= 29) {
        printf("%s, você terá de pagar R$60.00\n", nome);
    } else if (idade <= 45) {
        printf("%s, você terá de pagar R$120.00\n", nome);
    } else if (idade <= 59) {
        printf("%s, você terá de pagar R$150.00\n", nome);
    } else if (idade <= 65) {
        printf("%s, você terá de pagar R$250.00\n", nome);
    } else {
        printf("%s, você terá de pagar R$400.00\n", nome);
    }

    return 0;
}