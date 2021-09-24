#include<stdio.h>
#include<locale.h>



int main(void){
	setlocale(LC_ALL, "portuguese");
	float i,j;
	printf("Entre um número: ", i);
	scanf("%f", &i);
	printf("Entre outro número: ", j);
	scanf("%f", &j);
    printf("a) %d \n", i == j);
    printf("b) %d \n", i != j);	
    printf("c) %d \n", i <= j);
	printf("d) %d \n", i >= j);
	printf("e) %d \n", i != j);			
	
}


