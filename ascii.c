#include <stdio.h>
int main()
{
    char ch;
    printf("\nDigite um caracter: ");
    scanf("%c",&ch);
    printf("\nCaracter digitado: %c, Codigo ASCII: %d", ch, ch);
    return 0;
}