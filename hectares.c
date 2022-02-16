#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float largura, comprimento, area, hectares;
printf("digite a largura do terreno\n");
scanf("%f",&largura);
printf("digite o comprimento do terreno\n");
scanf("%f",&comprimento);
area=comprimento*largura;
hectares = area/pow(10000,2);
printf("o terreno possui %f hectares\n",hectares);
return 0 ;


}