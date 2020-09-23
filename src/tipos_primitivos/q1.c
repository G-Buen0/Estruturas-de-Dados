#include <stdio.h>
#include <math.h>

int isPrime(int n){

    if(n == 1){
        return 0;
    }

    for(int i = 2; i<= sqrt(n); i++ ){
        if(n % i == 0){
            return 0;
        }
    }

    return 1;
}

int main(void) {

    int n;
    int nCopy;
    int result;
    int prime;

    printf("Informe um valor: \n");
    scanf("%d", &n);

    // Enquanto o usuário não informa um n menor ou igual a zero.
    while(n > 0){

        nCopy = n;
        prime = 2;
        // Enquanto o número de termos dado pelo usuário não chega ao fim.
        while(nCopy != 0){

            // Verifica se é primo.
            result = isPrime(prime);
            if(result){
                
                printf("%d \n", prime);
                nCopy --;

            }

            prime ++;
        }

        printf("Informe um valor: \n");
        scanf("%d", &n);
    }

    return 0;
}

