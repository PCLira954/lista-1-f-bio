#include <stdio.h>

int main(){

    printf(" >>> CONVERTER DOLAR EM REAL <<< \n");
    printf(" *** O DOLAR DE HOJE(13/02/2024) CUSTA R$4,97 ***\n");
    float dolares;

    printf("> Quantos dolares deseja?\n");
    scanf("%f", &dolares);

    float reais = dolares * 4.97;

    printf(" %.2f dolares convertidos em reais ficam R$ %.2f reais.\n", dolares , reais);

    return 0;

   
}
