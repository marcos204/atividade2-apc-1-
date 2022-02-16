#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int n1,n2,resto,res;
  
  printf ("\nDigite um numero:");
  scanf ("%d", &n1);
  
  printf ("\nDigite um numero:");
  scanf ("%d", &n2);
  
  res = n1 / n2;
  resto = n1%n2;
  
  printf("\nResultado da divisao de %d / %d = %d. \n",n1,n2,res);
  printf("o resto da divisao é %d",resto);
  return(0);
}