// Questão 25
#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, d;
    printf("Digite as coordenadas do primeiro ponto (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Digite as coordenadas do segundo ponto (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("A distância entre os pontos (%.2f, %.2f) e (%.2f, %.2f) é: %.2f\n", x1, y1, x2, y2, d);
    return 0;
}