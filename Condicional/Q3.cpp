/*Fa�a um programa que leia um n�mero inteiro e verifique se esse n�mero � par ou
�mpar.*/

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
