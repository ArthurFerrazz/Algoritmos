/*Faça um programa que leia os coeficientes de uma equação do segundo grau. Em
seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são
calculadas como
em que ? = b² – 4 * a * c e ax²+ bx + c = 0 representa uma equação do segundo grau. A variável
a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de
segundo grau”. Do contrário, imprima:
• Se ? < 0, não existe real. Imprima a mensagem “Não existe raiz”.
• Se ? = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
• Se ? > 0, existem duas raízes reais. Imprima as raízes.*/

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
            printf("Nao e equaçao de segundo grau");
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
