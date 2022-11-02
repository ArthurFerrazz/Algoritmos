/*Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois
números forem iguais, imprima a mensagem “Números iguais”.*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	
    int n[2], i;
    for (  i=0; i<2; i++){
    	
       printf("Me informe um numero :");
       scanf("%d",&n[i]); 
    }
    if (n[0]>n [1])
    {
        printf("Numero %d e o maior",n[0]);
    }else if (n[0]== n[1])
    {
      printf("\nNumeros iguais"); 
    }else
    {
        printf("Numero %d e o maior",n[1]);
}
}
