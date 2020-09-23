#include <stdio.h>
int main()
{
 int c1;
 printf("Merci de saisir le chiffre 1 : ");
 scanf("%d", &c1);
 printf("Le nombre %d est %s\n", c1, c1 % 2 ? "impair" : "pair");
 return (0);
}