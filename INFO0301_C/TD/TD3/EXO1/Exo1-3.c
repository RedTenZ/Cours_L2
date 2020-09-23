#include <stdio.h>
#include <stdlib.h>
#define max 100

int main(){


 int T[max]; 
 int tailleU;     
 int i;     
 
 printf("donenr taille du tab ");

 scanf("%d", &tailleU );

 for (i=0; i<tailleU; i++)

    {

     printf("Elément %d : ", i);

     scanf("%d", &T[i]);

    }

 printf("Tableau donné :\n");

 for (i=0; i<tailleU; i++){

     printf("%d ", T[i]);


}

 printf("Tableau donné à l'envers :\n");

 for (i=tailleU; i>0; i--){

     printf("%d ", T[i]);


}


	return 0;
}