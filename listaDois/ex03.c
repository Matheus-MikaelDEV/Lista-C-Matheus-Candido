#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float percurso;
    char carro;

    printf ("Qual o percurso?: ");
    scanf ("%f", &percurso);
    printf ("Qual o carro? (A,B,C): ");
    scanf (" %c", &carro);

    if (carro == 'A' || carro == 'a'){
        printf("Você precisa de %.2f litros de gasolina", percurso / 12);
    }
    else if (carro == 'B' || carro == 'b'){
        printf("Você precisa de %.2f litros de gasolina", percurso / 9);
    }
    else if (carro == 'C' || carro == 'c'){
        printf("Você precisa de %.2f litros de gasolina", percurso / 8);
    }else {
        printf("Carro inválido.");
    }

    return 0;
}