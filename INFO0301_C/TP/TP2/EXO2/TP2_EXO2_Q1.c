#include <stdio.h>
int main()
{
 int c1, c2;
 printf("Merci de saisir le chiffre 1 : ");
 scanf("%d", &c1);
 printf("Merci de saisir le chiffre 2 : ");
 scanf("%d", &c2);
 c1>c2 ? printf("%d", c1) : printf("%d", c2);
 return (0);
}