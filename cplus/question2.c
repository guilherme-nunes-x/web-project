#include<stdio.h>
void ps(float id );

int main(){
float id;

printf("digite sua idade");
scanf("%f", &id);
ps(id);
}

void ps(float id){
if(id >= 5 && id <= 7){
    printf("Infantil A");
}

else if(id >= 8 && id <= 10 ){
    printf("Infantil B");
}
else if(id >= 11 && id <= 13){
    printf("Juvenil A");
}
else if(id >= 14 && id <= 17 ){
    printf("Juvenil A");
}
else if(id >= 18){
    printf("Adulto");
}
}
