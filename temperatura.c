#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float celsius, fahr;
	
	
	printf("Digite uma temperatura em celsius : \n");
	
	scanf("%f",&celsius);
	
	fahr = celsius*(9.0/5.0)+32;
	
	printf("%f celsius e o mesmo que %f fahr\n", celsius, fahr);
  return 0;
}