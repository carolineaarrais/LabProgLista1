// Questão 06
#include <stdio.h>
int main() {
    int h, m, s;
    int ts;
    printf("Digite a quantidade de horas: ");
    scanf("%d", &h);
    printf("Digite a quantidade de minutos: ");
    scanf("%d", &m);
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &s);
    ts = (h * 3600) + (m * 60) + s;
    printf("Total em segundos: %d\n", ts);
    return 0;
}