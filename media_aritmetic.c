#include <stdio.h>
#include<stdlib.h>

int main() {
  float x,y,z,media;
  printf("escreva o valor de x\n");
  scanf("%f",&x);
printf("escreva o valor de y\n");
scanf("%f",&y);
printf("escreva o valor de z\n");
scanf("%f",&z);
media=(x+y+z)/3;
printf("a media desses numeros é%f\n",media);
  return 0;
}