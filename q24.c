// Questão 24
#include <stdio.h>

int main() {
    int ts;
    int h, m, s;
    printf("Digite o tempo em segundos: ");
    scanf("%d", &ts);
    h = ts / 3600;
    m = (ts % 3600) / 60;
    s = ts % 60;
    printf("%d segundos correspondem a %d horas, %d minutos e %d segundos.\n", ts, h, m, s);
    return 0;
}