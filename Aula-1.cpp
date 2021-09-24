#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    printf("Olá, mundo! \n");
    return(0);
}