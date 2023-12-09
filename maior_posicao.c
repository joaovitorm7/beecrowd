#include <stdio.h>

int main() {
    int ler, maior = 0, posicao = 0;
    
    for (int i = 1; i <= 5; i++) {
        scanf("%d", &ler);
        if ( ler > maior){
            maior = ler;
            posicao = i;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", posicao);
 
    return 0;
}