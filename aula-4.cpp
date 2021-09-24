#include<stdio.h>
#include<locale.h>


int main(void){
	setlocale(LC_ALL, "portuguese");
    float i, j, k;
    printf("Coloque a medida da base do triãngulo: ", i);
    scanf("%f", &i);
    printf("Coloque a medida da altura do triângulo: ", j);
    scanf("%f", &j);
    k = (i*j)/2;
    printf("\nA área do triângulo de base %.2f e altura %.2f é: %.2f", i, j, k);
}
