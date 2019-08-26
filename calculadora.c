#include <stdio.h>

int adicao(int a,int b){
	int soma;
	soma = a+b;
	printf("%d\n", soma);
	return soma;
}
int subtracao(int a,int b){
	int sub;
	sub = a-b;
	printf("%d\n", sub);
	return sub;
}
int multiplicacao(int a,int b){
	int mult;
	mult = a*b;
	printf("%d\n", mult);
	return mult;
}
int divisao(int a,int b){
	int div;
	if(b!=0){
		div = a/b;
		printf("%d\n", div);
	}
	else{
		printf("NULL\n");
	}
	return div;
}

int main(){

	int op, num1, num2, resultado;
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	printf("Digite a opção desejada: ");
	scanf("%d", &op);

	switch(op){
		case 1: resultado = adicao(num1,num2); break;
		case 2: resultado = subtracao(num1,num2); break;
		case 3: resultado = multiplicacao(num1,num2); break;
		case 4: resultado = divisao(num1,num2); break;

		default: printf("Opção inválida.\n"); break;
	}

	return 0;
}