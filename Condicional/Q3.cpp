/*Faça um programa que leia um número inteiro e verifique se esse número é par ou
ímpar.*/

#include <stdio.h>


int main (){
	
    int n, par;
    
    printf("Digite um numero:");
   	scanf("%d",&n);
    par = n % 2;
    if (par == 0){
        printf("\nEsse numero e par");
   }else{
        printf("\nEsse numero e impar");
   }
    
}
