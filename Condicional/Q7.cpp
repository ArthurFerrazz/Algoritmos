/*Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior
do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem
positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão
escrever "Valores nao aceitos"*/

#include <stdio.h>
#include <math.h>


int main(){
	
    int a[4], i;
    int soma1, soma2, par;
    
    for (i = 0; i < 4; i++)
    {
        printf("Digite o valor %d :",i+1);
        scanf("%d",&a[i]);
    }
    
    soma1 = a[2] + a[3];
    soma2 = a[0] + a[1];
    par = a[0] % 2;
    
    if (a[1] > a[2] && a[3] > a[0] && soma1>soma2 && a[2] > 0 && a[3] > 0 &&par == 0){	
       printf("Valores aceitos");
    }else{
        printf("Valores nao aceitos");
    }
    
}
