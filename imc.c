#include <stdio.h>

void classifica (float imc){
	if(imc<18.5){
		printf("Abaixo do peso.\n");
	}
	if(imc>=18.5 && imc<=25){
		printf("Peso normal.\n");
	}
	if(imc<25 && imc <= 30){
		printf("Acima do peso.\n");
	}
	if(imc>30){
		printf("Obeso.\n");
	}
}

int main(){
	float altura, peso, imc;
	scanf("%f %f", &altura, &peso);
	imc = peso/(altura*altura);
	classifica(imc);

	return 0;
} 