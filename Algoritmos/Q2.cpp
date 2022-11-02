//2. Construa um algoritmo que calcule a área de um círculo cujo raio é fornecido pelo usuário (use área= 3.14 x raio2)

#include <stdio.h>

int main(){
	
	int a, r, r2;
	
	printf("Digite o numero do raio: ");
	scanf("%d", &r);
	r2 = r * r;
	a = 3.14 * r2;
	printf("Area: %d", a);

}
