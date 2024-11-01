// Questão 09
#include <stdio.h>
int main() {
    float c, l, h, v;
    printf("Digite o comprimento da caixa: ");
    scanf("%f", &c);
    printf("Digite a largura da caixa: ");
    scanf("%f", &l);
    printf("Digite a altura da caixa: ");
    scanf("%f", &h);
    v = c * l * h;
    printf("O volume da caixa retangular é: %.2f\n", v);
    return 0;
}