//Faça um programa que leia dois números e mostre qual deles é o maior.

#include <stdio.h>

int main(){
	
	int n[2], i;
	
    for (i=0; i<2; i++){
        printf("Me forneca um numero ",i);
        scanf("%d",&n[i]);
    }
    if ( n[0] > n[1])
    {
       printf("O numero %d e o maior ",n[0]);
    } 
    else if (n[1] > n[0])
    {
        printf("Numero %d e o maior ", n[1]);
    }
	
}
