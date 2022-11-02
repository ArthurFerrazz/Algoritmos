/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o
usuário entre com o valor e o estado de destino do produto e o programa retorne o preço
final do produto acrescido do imposto do estado em que ele será vendido. Se o estado
digitado não for válido, mostrará uma mensagem de erro.*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	
    float mg, sp, rj, ms, venda;
    char estado[2];
    
    printf("Qual o valor da venda :");
    scanf("%f",&venda);
    
    printf("Qual o destino da venda :");
    scanf("%s",&estado);
    
    
    if (strcmp(estado,"MG")==0 || strcmp(estado,"mg")==0) //fun??o de comparar strings
    {
        mg= venda + (venda * 0.07);
        printf("O valor da venda para Minas Gerais e %.2f",mg);
    }
    else if(estado=="SP"|| estado =="sp")
        {
        sp= venda + (venda * 0.12);
        printf("O valor da venda para Sao Paulo e %.2f",sp);
        }
    else if(estado=="RJ"|| estado =="rj"){
        rj= venda + (venda * 0.15);
        printf("O valor da venda para Rio de Janeiro e %.2f",rj);
        }
    else if (estado=="MS"|| estado =="ms"){
        ms= venda + (venda * 0.08);
        printf("O valor da venda para Mato Grosso do Sul e %.2f",ms);
        }
    else{
        printf("Erro, o estado digitado nao esta no nosso banco de dados");
        }
            
}
