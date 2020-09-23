#include <stdio.h>
int main()
 { /* Déclaration des variables */
 int a=5, b = 2;
 char c='c', d='d';
 short e=6, f=7;
 long g=666, h=777 ;
 unsigned int i=58, j=59 ;
 unsigned long k=52, l=12;
 float m=5.54, n=8.22;
 double o=5.213, p=8.5845 ;
 long double q=1.545, r=8.4144 ;
 /* Les instructions */
 /* Affichage de variables de type « int » avec le format « %d » */
 printf("\n") ;
 printf("La valeur de a est égale à %d \n",a);
 printf("a = %d et b = %d \n",a,b);
  /* Affichage de variables de type « char » avec le format « %c » */
 printf("\n") ;
 printf("La valeur de c est égale à %c \n",c);
 printf("c = %c et d = %c \n",c,d);
 /* Affichage de variables de type « short » avec le format « %hd » */ 
 printf("\n") ;
 printf("La valeur de e est égale à %hd \n",e);
 printf("e = %hd et f = %hd \n",e,f);
 /* Affichage de variables de type « long » avec le format « %ld » */
 printf("\n") ;
 printf("La valeur de g est égale à %ld \n",g);
 printf("g = %ld et h = %ld \n",g,h);
 /* Affichage de variables de type « unsigned int » avec le format « %u » */ 
 printf("\n") ;
 printf("La valeur de i est égale à %u \n",i);
 printf("i = %u et j = %u \n",i,j);
 /* Affichage de variables de type « unsigned long » avec le format « %lu » */
 printf("\n") ;
 printf("La valeur de k est égale à %lu \n",k);
 printf("k = %lu et l = %lu \n",k,l);
 /* Affichage de variables de type « float » avec le format « %4.2f » */
 printf("\n") ;
 printf("La valeur de m est égale à %4.2f \n",m);
 printf("m = %4.2f et n = %4.2f \n",m,n);
 /* Affichage de variables de type « double » avec le format « %le » */
 printf("\n") ;
 printf("La valeur de o est égale à %le \n",o);
 printf("o = %le et p = %le \n",o,p);
 /* Affichage de variables de type « long double » avec le format « %Le » */
 printf("\n") ;
 printf("La valeur de q est égale à %Le \n",q);
 printf("q = %Le et r = %Le \n",q,r);
/*--------------------------- */
 return(0);
}
