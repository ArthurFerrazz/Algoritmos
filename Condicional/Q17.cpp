//Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou
//5, mas não simultaneamente pelos dois.

#include <stdio.h>

int main (){
     int i , por3, por5;
     
    printf("Me forneca um numero: ");
    scanf("%d",&i);
    
    por3= i % 3;
    por5= i % 5;
  
    if (por3 == 0 && por5 == 0){
        printf("Esse numero NAO pode pois e divisivel por 3 e por 5");
    }
    else if(por3 == 0){
        printf("Numero divisivel por 3");
    }
	else if(por5 == 0){
        printf("Numero divisivel por 5");
    }  
	else if(por3 > 0 && por5 > 0){
        printf("Numero nao divisivel nem por 3 e nem por 5");
    }
    
}
