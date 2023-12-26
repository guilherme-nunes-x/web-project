#include<stdio.h>
 float funsao(float tn,float tf , float pn, float vl );

int main(){
float tn, tf, vl , pn, delta, ps;

    printf("digite a tempo inicial e a tempo final");
    scanf("%f %f", &tn ,&tf);
    printf("digite a posicao inicial e a velocidade");
    scanf("%f %f", &pn ,&vl);

    ps = funsao( tn, tf , pn,  vl );

    printf("o valor da posisao inicial e igual a %f ", ps);
}

 float funsao(float tn,float tf , float pn, float vl ){
 float ps;
 ps = pn + vl * tf - tn;

 return ps;
 }
