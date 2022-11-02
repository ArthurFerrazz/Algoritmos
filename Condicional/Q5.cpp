/*Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: o
número digitado ao quadrado e raiz quadrada do número digitado.*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	
    int n, quadrado;
    float raiz;
    printf("Digite um numero desejado :");
    scanf("%d",&n);
    if (n > 0)
    {
       quadrado = pow(n,2);
       raiz = sqrt(n);
       printf("O %d elevado ao quadrado e %d\nja a raiz desse mesmo numero e %.2f",n,quadrado,raiz);
    }else if(n == 0)
    {
        printf("Esse numero nao e nem positivo nem negativo");
    }else
    {
        printf("Esse numero e negativo e nao sera calculado");
    }
    
}
