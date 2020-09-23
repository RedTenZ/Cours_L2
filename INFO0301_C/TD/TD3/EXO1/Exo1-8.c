#include <stdio.h>
#include <stdlib.h>
#define max 100

int main(){


 int T[max]; 
 int tailleU;
 int i,j,temp;
 
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

    for (i=0, j=tailleU-1; i<j; i++,j--)
    {
        temp = T[i];
        T[i] = T[j];
        T[j] = temp;
    }

 printf("Tableau donné apres inversion :\n");

 for (i=0; i<tailleU; i++){

     printf("%d ", T[i]);


}


    return 0;
}