#include <stdio.h>
#include <stdlib.h>
#define max 100

int main(){


 int T[max]; 
 int tailleU;     
 int i,x,occ;     
 
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
printf("donner la valeur à trouvé :\n");
scanf("%d",&x);

occ=0;

 for (i=0; i<tailleU; i++){

     if(T[i]==x){
     	occ++;
     }

printf("votre valeur %d est apparus %d fois:\n",x ,occ);
}




	return 0;
}