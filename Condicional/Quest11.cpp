/*Leia 2 valores com uma casa decimal (x e y), que devem representar as
coordenadas de um ponto em um plano. A seguir, determine qual o quadrante
ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na
origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem
“Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”,
conforme for a situação.*/

#include <stdio.h>
#include <math.h>


int main (){
    int y, x;
    
 printf ("Me forneca a posicao x: ");
 scanf ("%d",&x);
 
 printf ("Me forneca a posicao y: ");
 scanf("%d",&y);
    
 if (x>0 && y>0){
 printf("O ponto se encontrar no 1 quadrante\n");
 }
 else if (x<0 && y>0){
 printf("O ponto se encontrar no 2 quadrante\n");
 }
 else if (x<0 && y<0){
 printf("O ponto esta no 3 quadrante\n ");
 }
 else if (x>0 && y<0){
 printf("O ponto se encontrar no 4 quadrante\n");
 }
 else if (x == 0 && y ==0){
 printf ("Origem\n");
 }
 else if (x == 0){
 printf ("Eixo x\n");
 }
 else if (y==0){
 printf("Eixo y\n");
 }
    
}
