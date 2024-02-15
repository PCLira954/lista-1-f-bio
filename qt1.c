#include <stdio.h>

int main(){

float velocidade_kmh;

printf("Qual e a velocidade em km/hr?\n");
scanf("%f", &velocidade_kmh);

float velocidade_ms = velocidade_kmh * 3.6;

printf("> A velocidade covertida em metros por segundo e %.1f m/s\n", velocidade_ms);

return 0;


}