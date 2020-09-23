#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a;
    printf("Merci de saisir un premier caractere : ");
	scanf("%c",&a);
	printf("Le caractere saisie est '%c' et son code ascii est %d: ", a,a);
    return 0;
}
