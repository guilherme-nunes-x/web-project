#include<stdio.h>
float esfera(float raio);

int main(){
float rs, raio;

    printf("digite o valor do raio");
    scanf("%f", &raio);

    rs = esfera(raio);

    printf("o valor do volume da esfera e igual a %f", rs);
}

float esfera (float raio){
float rs;

rs = 4 * 3.14 * raio* raio *raio / 3;

return rs;
}
