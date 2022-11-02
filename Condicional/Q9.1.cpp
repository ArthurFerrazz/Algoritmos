/*Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a seguir,
verifique e mostre qual a classificação dessa pessoa.*/

#include <stdio.h>
#include <math.h>
#include <string.h>


int main(){
    float altura, peso;
    
    printf("Qual sua altura ");
    scanf("%f",&altura);
    
    printf("Qual sua peso ");
    scanf("%f",&peso);
    
    if(altura <= 1.20 && peso < 60){
        printf("Sua classificaçao e A");
    }
    
    else if(altura <= 1.20 && peso >60 && peso <90){
        printf("Sua classificaçao e B");
    }
    
    else if (altura <= 1.20 && peso >90){
     printf("Sua classificaçao e G");  
    }
    
    else if (altura >= 1.20 && altura <=1.70 && peso < 60){
        printf("Sua classificaçao e B");
    }
    
    else if(altura >= 1.20&&altura <=1.70 && peso >60 && peso <90){
         printf("Sua classificaçao e E");
    }
    
    else if(altura >= 1.20 && altura <=1.70 && peso>90){
         printf("Sua classificaçao e H");
    }
    
    else if (altura >=1.70 && peso <60){
        printf("Sua classificaçao e C");
    }
    
    else if(altura >=1.70 && peso >60 && peso <90){
        printf("Sua classificaçao e F");
    }
	 else if (altura >= 1.70 && peso >90){
        printf("Sua classificaçao e I");
    }
    
}
