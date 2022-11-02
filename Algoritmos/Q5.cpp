//Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a 
//quantidade de metros avulsos de fios que ele precisa adquirir. Sabe-se que o 
//construtor tem a quantidade total de fios em metros a serem utilizados na instalação 
//elétrica da obra e que cada rolo de fio tem 50 metros

#include <stdio.h>

int main(){
	int fios, n1, n2, result;
	
	printf("Digite a quantidade necessaria de fios em metros:");
	scanf("%d", &fios);
	
	n1 = fios / 50;
	printf("Sao necessarios %d rolos\n", n1);
	
	n2 = fios % 50;
	printf("Sao necessarios %d metros avulsos de fio", n2);
	
	
	
	
}
