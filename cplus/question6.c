#include<stdio.h>
double MP(int k[], int soma){
    double rs;
    for(int i = 0; i < 5; i++){
        if(k[i]%2 == 0 ){
            soma = soma + 1 ;
        }
    }
    rs = soma/5.0;
    return rs;
}

int main(){
    int k[5], soma = 0;
    double gb;

    printf("Digite os 5 valores\n");
    for(int i = 0; i < 5; i++){
        scanf("%i", &k[i]);
    }
    gb = MP(k, soma);

    printf("A media foi igual a %.2f\n", gb);
}










