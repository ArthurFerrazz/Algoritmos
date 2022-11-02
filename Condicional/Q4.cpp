/*Faça um programa que leia o salário de um trabalhador e o valor da prestação de um
empréstimo. Se a prestação, for maior que 20% do salário, imprima: “Empréstimo não
concedido.”, caso contrário, imprima: “Empréstimo concedido.”*/

#include <stdio.h>
#include <math.h>



int main (){
    int prestacao ;
    float salario ;
    
    printf("Me forenaca o salario do funcionario :");
    scanf("%f",&salario);
    printf("Me forenaça a prestacao do funcionario :");
    scanf("%d",&prestacao);
    
    if (prestacao > salario *0.2)
    {
        printf("Emprestimo nao concedido.");
    }else{
        printf("Emprestimo concedido.");
    }
    
}

