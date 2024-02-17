#include <stdio.h> 

int main(){
    int minutos;

    printf("quantos minutos?");
    scanf("%d", &minutos);

    int horas = minutos/60;
    int minut0s = minutos - (horas * 60);

    printf(" %d minutos convertidos em horas e %d horas e %d minutos.", minutos, horas, minut0s);

    return 0
}