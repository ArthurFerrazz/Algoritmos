/*Fa�a um programa que leia o sal�rio de um trabalhador e o valor da presta��o de um
empr�stimo. Se a presta��o, for maior que 20% do sal�rio, imprima: �Empr�stimo n�o
concedido.�, caso contr�rio, imprima: �Empr�stimo concedido.�*/

#include <stdio.h>
#include <math.h>



int main (){
    int prestacao ;
    float salario ;
    
    printf("Me forenaca o salario do funcionario :");
    scanf("%f",&salario);
    printf("Me forena�a a prestacao do funcionario :");
    scanf("%d",&prestacao);
    
    if (prestacao > salario *0.2)
    {
        printf("Emprestimo nao concedido.");
    }else{
        printf("Emprestimo concedido.");
    }
    
}

