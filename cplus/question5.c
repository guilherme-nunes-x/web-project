#include<stdio.h>
void t(int l1, int l2, int l3 );

int main(){
int l1, l2, l3, rs;

printf("digite os tres lados do triangulo");
scanf("%i %i %i", &l1, &l2 , &l3);
 t(l1, l2, l3);
}

void t(int l1, int l2, int l3 ){
if(l1 == l2 && l1 == l3 && l2 == l3){
    printf("equilatero");
}

else if(l1 == l2 || l1 == l3 ||l2 ==l3 ){
    printf("isoceles");
}

else if(l1 != l2 || l1 != l3 || l2 != l3){
    printf("escaleno");
}

}
