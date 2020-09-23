// 1 - H2 > H1: ex. 3 5  5 3
    // Transformar tudo para minuto e subtrair o maior do menor.

// 2 - H2 < H1: ex. 22 30  1 20
    // Tranformar tudo para minuto, adicionar 20*60 nos minutos de H2 + M2 e, por fim, subtrair o maior do menor.

// 3 - H2 = H1: ex. 22 30  22 20
    // Transformar tudo para minuto, fazer a diferença entre o maior e o menor e, por fim, subtrair o resultado da
    // diferença de 24 * 60.

// 4 - H2 = H1 e M2 > M1:  
    // Transformar tudo para minuto, fazer a diferença entre o maior e o menor.

#include <stdio.h>

int main(void){
    int h1, h2, m1, m2;

    while(!(h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0)){
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

        if((h2 > h1) || (h2 == h1 && m2 > m1)){
            
            h1 = 60*h1 + m1;
            h2 = 60*h2 + m2;

            printf("%d \n", (h2 - h1));

        }else if(h2 < h1){
            h1 = 60*h1 + m1;
            h2 = 60*h2 + m2 + 60*24;

            printf("%d \n", (h2 - h1));

        }else{
            h1 = 60*h1 + m1;
            h2 = 60*h2 + m2;

            printf("%d \n", (24*60 + (h2 - h1)));
        }

    }

    return 0;


}