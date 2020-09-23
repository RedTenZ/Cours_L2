#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 100

int main(){


 int T[max],T2[max]; 
 int tailleU;     
 int i;  
  srand(time(NULL));   
 
 printf("donenr taille du tab ");

 scanf("%d", &tailleU );

 for (i=0; i<tailleU; i++)

    {

	T[i] = rand();

    }

 printf(" Tableau donné :\n");


 for (i=0; i<tailleU; i++){

	     printf("à l'indice %d il y as %d ",i+1 , T[i]);

}

for (i=0; i<tailleU; i++)

    {

	T2[i] = T[i];

    }

    printf("Second tableau donné :\n");


 for (i=0; i<tailleU; i++){

	     printf("à l'indice %d il y as %d ",i+1 , T2[i]);


return 0;

}
}