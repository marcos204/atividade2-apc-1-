
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1,x2,y1,y2;
    float distancia;
    printf("escreva o valor de x1,y1,x2,y2");
    scanf("%i %i %i %i", &x1, &y1, &x2, &y2);

    distancia = sqrt( pow(x2-x1, 2) + pow(y2-y1, 2) );

    printf("a distancia é %f", distancia);
    return 0;
}