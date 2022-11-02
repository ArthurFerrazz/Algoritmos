/*Fa�a um programa que leia os coeficientes de uma equa��o do segundo grau. Em
seguida, calcule e mostre as ra�zes dessa equa��o, lembrando que as ra�zes s�o
calculadas como
em que ? = b� � 4 * a * c e ax�+ bx + c = 0 representa uma equa��o do segundo grau. A vari�vel
a tem de ser diferente de zero. Caso seja igual, imprima a mensagem �N�o � equa��o de
segundo grau�. Do contr�rio, imprima:
� Se ? < 0, n�o existe real. Imprima a mensagem �N�o existe raiz�.
� Se ? = 0, existe uma raiz real. Imprima a raiz e a mensagem �Raiz �nica�.
� Se ? > 0, existem duas ra�zes reais. Imprima as ra�zes.*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	
    float a, b, c, delta, raiz, raiz2;
    
    printf("Me forneca o \"A\":");
    scanf("%f",&a);
    
    printf("Me forneca o \"B\":");
    scanf("%f",&b);
    
    printf("Me forneca o \"C\":");
    scanf("%f",&c);
    
        if (a== 0){
            printf("Nao e equa�ao de segundo grau");
        }
		else{  
            delta = pow(b,2) - 4 * a * c;
        if (delta <0 ){
            printf("Nao existe raiz");
        }
		else if (delta == 0){
            raiz= (-1*b) /(2*a);
           printf("raiz unica e com valor de %.2f",raiz) ;
        }
		else if (delta >0){
            raiz =((-1*b) + sqrt(delta)) /(2*a);
            raiz2 =((-1*b) - sqrt(delta)) /(2*a);
            printf("As raizes sao %.1f e %.1f",raiz,raiz2);
        }
        
    
    }
}
