// Questão 05
#include <stdio.h>
int main() {
    float a, pi;
    char s;
    printf("Digite a altura em metros: ");
    scanf("%f", &a);
    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &s);
    if (s == 'M' || s == 'm') {
        pi = 72.7 * a - 58;
    } else if (s == 'F' || s == 'f') {
        pi = 62.1 * a - 44.7;
    } else {
        printf("Sexo inválido. Por favor, digite M ou F.\n");
        return 1;
    }
    printf("O peso ideal é: %.2f kg\n", pi);
    return 0;
}