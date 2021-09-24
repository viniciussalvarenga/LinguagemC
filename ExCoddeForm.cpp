#include<stdio.h>
#include<locale.h>

int main(void){
    setlocale(LC_NUMERIC, "");
    printf("%s está a %d milhões de milhas \ndo sol \n", "Vênus", 67);
}