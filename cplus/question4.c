#include<stdio.h>
#include<math.h>
//4. Crie um procedimento que recebe os coeficientes de uma equação do 2º grau e calcula suas raízes;
void eq(float a, float b, float c);

int main(){
float a, b, c;

printf("digite os valores a, b e c");
scanf("%f %f %f", &a, &b, &c);

eq( a,  b,  c);

}

void eq(float a, float b, float c){
float rs1, rs2, rs3;

rs1 = sqrt(a);

rs2 = sqrt(b);

rs3 = sqrt(c);
printf("a raiz de a e  %f \n",rs1);
printf(" a raiz de b e %f \n", rs2);
printf("a raiz de c e  %f \n", rs3);
}
