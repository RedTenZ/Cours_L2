#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 100

main()
{

 int T[max], T2[max]; 
 int tailleU;   
 int i;     
 long ps; 
  srand(time(NULL));  
 
 printf("Dimension des tableaux : ");


 scanf("%d", &tailleU );


 printf("Tableau 1 donné :\n");

 for (i=0; i<tailleU; i++){

     printf("%d ", T[i]);


}

 printf("Tableau 2 donné :\n");

 for (i=0; i<tailleU; i++){

     printf("%d ", T2[i]);


}

 for (ps=0, i=0; i<tailleU; i++)
      ps += (long)T[i]*T2[i];

 printf("Produit scalaire : %ld\n", ps);
 return 0;
}