#include <stdio.h>
#include <stdlib.h>
int main(){   
float peso , altura, imc;
printf("\nInforme seu peso em Kg:");
scanf ("%f",&peso);
printf("\nInforme sua altura em m:");
scanf ("%f",&altura);
imc = peso / (altura*altura); 
printf("o valor do imc é %f\n",imc);
return 0;
}