//Construa um algoritmo que a partir da leitura de dois n�meros forne�a o resto e o quociente da divis�o do primeiro pelo segundo n�mero.

#include <stdio.h>

int main(){
	int n1, n2;
	int resto, quociente;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	resto = n1 % n2;
	printf("O resto da divisao: %d\n", resto);
	
	quociente = n1 / n2;
	printf("O quociente da divisao: %d", quociente);	
	
}
