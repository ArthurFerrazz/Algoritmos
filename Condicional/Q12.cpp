/*Fa�a um programa que informe o m�s de acordo com o n�mero digitado pelo usu�rio.
Exemplo: Entrada = 4. Sa�da = Abril.*/

#include <stdio.h>

 int main (){
    int x;
    
    printf("Me forneca a posicao do mes :");
    scanf("%d",&x);
    
    if (x == 1){
    printf("Janeiro");
    }
	else if(x == 2){
    printf("Fevereiro");   
    }
    else if ( x == 3){
    printf("Marco");   
    }
	else if( x == 4){
    printf("Abril");
    }
	else if ( x == 5){
    printf("Maio ");   
    }
	else if (x == 6){
    printf("Junho");    
    }
	else if (x == 7){
    printf("Julho");   
    }
	else if (x == 8){
    printf("Agosto");
    }
	else if(x == 9){
    printf("Setembro ");
    }
    else if ( x == 10){
    printf("Outubro");    
    }
	else if( x == 11){
    printf("Novembro");
    }
	else if ( x == 12){
    printf("Dezembro ");   
    }
	else if (x>12 || x<=0){
    printf("Esse mes nao existe ");   
    }
}
	
	
	
	
	
	
	
	

