#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 100

int main(){


 int T[max]; 
 int tailleU;     
 int i;     
  srand(time(NULL));
 
 printf("donenr taille du tab ");

 scanf("%d", &tailleU );

 for (i=0; i<tailleU; i++)

    {

	T[i] = rand();

    }

 printf("Tout les entier du Tableau donné :\n");

 for (i=0; i<tailleU; i++){

 	if(T[i]>0)
	{
	     printf("à l'indice %d il y as %d ",i+1 , T[i]);
	}

}
return 0;

}