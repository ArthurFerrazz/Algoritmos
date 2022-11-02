//Leia 2 valores A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a 
//média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma 
//dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0

#include <stdio.h>

int main(){
	int a, b, soma, m;
	
	printf("Digite a nota A:");
	scanf("%d", &a);
	printf("Digite a nota B:");
	scanf("%d", &b);
	
	soma = a + b;
	m = soma / 2;
	printf("A media do aluno: %d", m);
	
	
	
	
}
