#include <stdio.h>
#include<stdlib.h>

int main() {
  float valor_compra, ano_fabricacao, ano_depreciacao,depreciacao;
  printf("escreva o valor do carro\n");
  scanf("%f",&valor_compra);
printf("escreva o ano da fabricação\n");
scanf("%f",&ano_fabricacao);
printf("escreva o ano da depreciação\n");
scanf("%f",&ano_depreciacao);
depreciacao = (ano_depreciacao - ano_fabricacao) * 0.01 * valor_compra;
printf("a depreciaçao do veiculo é%f\n",depreciacao);
  return 0;
}