#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 100

int main(){


 int T[max]; 
 int tailleU;
 int i,min,maxi;
  srand(time(NULL)); 
 
 printf("donenr taille du tab ");

 scanf("%d", &tailleU );

 for (i=0; i<tailleU; i++)

    {

    T[i] = rand();

    }

    min=T[1];
    maxi=T[1];

 printf(" Tableau donné :\n");


 for (i=0; i<tailleU; i++){


         printf("à l'indice %d il y as %d ",i+1 , T[i]);

         if(T[i]<min){
             min=T[i];
         }
         if(T[i]>max){
             maxi=T[i];
         }


}

printf("le min est le max sont min:%d max:%d",min, maxi);
return 0;

}