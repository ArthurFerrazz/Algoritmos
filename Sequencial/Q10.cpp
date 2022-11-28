/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer
no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas
decimais após a vírgula, segundo a fórmula:*/

#include<stdio.h>
#include<math.h>

int main(){
	
	double x1, x2, y1, y2, resultadoX, resultadoY, calc;
	
	printf("Digite o valor de X: ");
	scanf("%lf", &x1);
	printf("Digite o valor de X: ");
	scanf("%lf", &x2);
	printf("Digite o valor de Y: ");
	scanf("%lf", &y1);
	printf("Digite o valor de Y: ");
	scanf("%lf", &y2);
	
	resultadoX = pow (x2 - x1, 2);
	resultadoY = pow (y2 - y1, 2);
	calc = sqrt(resultadoX + resultadoY);
	
	printf("Distancia = %.4lf", calc);
}
