/*Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal,
correspondente às quatro notas de um aluno. Calcule a média com pesos 2, 3, 4 e 1,
respectivamente, para cada uma destas notas e mostre esta média acompanhada pela
mensagem "Media: ". Se esta média for maior ou igual a 7.0, imprima a
mensagem "Aluno aprovado.". Se a média calculada for inferior a 5.0, imprima a
mensagem "Aluno reprovado.". Se a média calculada for um valor entre 5.0 e 6.9,
inclusive estas, o programa deve imprimir a mensagem "Aluno em exame.". No caso do
aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo aluno.
Imprima então a mensagem "Nota do exame: " acompanhada pela nota digitada.
Recalcule a média (some a pontuação do exame com a média anteriormente calculada e
divida por 2). e imprima a mensagem "Aluno aprovado." (caso a média final seja 5.0 ou
mais ) ou "Aluno reprovado.", (caso a média tenha ficado 4.9 ou menos). Para estes dois
casos (aprovado ou reprovado após ter pego exame) apresente na última linha uma
mensagem "Media final: " seguido da média final para esse aluno.*/

#include <stdio.h>
#include <math.h>
#include <string.h>


int main (){
    int i ;
    float n[4], media, recu, mediarecu;
    float peso[4] = {2.0,3.0,4.0,1.0};
    
    for ( i = 0; i < 4; i++){
       printf("Qual as nota %d do aluno ", i+1);
       scanf("%f", &n[i]);
       if (n[i] > 10){
        n[i] = 10;
       }
       }
    media = ((n[0] * peso[0]) + (n[1] * peso[1]) + (n[2] * peso[2]) + (n[3] * peso[3]))/10.0;
    
    if (media >= 7.0){
        printf("Media: %.1f\n ", media);
        printf("Aluno aprovado\n ");
    }
    else if (media <= 5.0){
        printf("Media: %.1f\n ", media);
        printf("Aluno reprovado\n ");
    }
    else if(media > 5.0 && media <= 6.9){
        printf("Aluno em exame.\n ");
        printf("Qual a nota do aluno em exame: ");
        scanf("%f",&recu);
        printf("Nota do exame:%.1f\n", recu);
        printf("Em exame com media%f", media);
        mediarecu = (recu + media) /2.0;
        
    if (mediarecu >= 5.0){
            printf("Aluno aprovado\n ");
            printf("Media final:%.1f ", mediarecu);
        }
		else if (media < 5.0){
            printf("Aluno reprovado ");
            printf("Media final:%.1f ", mediarecu);
        }
    }
}
