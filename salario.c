#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float vHorasTrabalhadas, vValorHora, vPercentDesconto,
  vSalarioBruto, vValorDesconto, vSalarioLiquido ;
  printf("\nInforme a quantidade de horas trabalhadas: ");
	scanf("%f", &vHorasTrabalhadas);
 
	printf("\nInforme o valor recebido por hora: ");
	scanf("%f", &vValorHora);
 
	printf("\nInforme o percentual de desconto do INSS: ");
	scanf("%f", &vPercentDesconto);
 
	vSalarioBruto = vHorasTrabalhadas * vValorHora;
	vValorDesconto = vSalarioBruto * vPercentDesconto / 100;
	vSalarioLiquido = vSalarioBruto - vValorDesconto;
 
	printf("\nO salá rio bruto é: %-7.2f", vSalarioBruto);
	printf("\nO valor de desconto é: %-7.2f", vValorDesconto);
	printf("\nO salário liquído é: %-7.2f", vSalarioLiquido);
return 0 ;
 }
