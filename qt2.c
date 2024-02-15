#include <stdio.h>

int main(){

printf(" *** Convertendo horas e minutos em minutos totais *** ");

    int horas;
    int minutos;

    printf("Quantas horas?");
    scanf("%d", &horas);

    printf("Quantos minutos?");
    scanf("%d", &minutos);

    int horas_convertidas = horas * 60;
    int minutos_totais = minutos + horas_convertidas;

    printf("> O tempo que voce enviou convertido em minutos e %d minutos\n", minutos_totais);

    return 0;


}