#include <stdio.h>

int main(){
int N, cont=1;
    scanf("%d",&N);
    for (cont=1; cont<=10 ; cont++){
        printf("%d x %d = %d\n",cont, N , N*cont);
    }
    return 0;
}