#include <stdio.h>
#include <stdlib.h>
#define max 100

int main(){


 int T[max]; 
 int tailleU;     
 int i,nb,nbDouble,j;     
 
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

int obj;
nb=0;
nbDouble=0;


 for (i=0; i<tailleU; i++){

 	obj=T[i];
 	nb=0;

 	for (j=0; j<tailleU; j++){


    	 if(T[i]==obj){
     	nb++;
     }
     if(nb>1){
     	nbDouble++;
     }

 }

}

printf("il y a %d element dupliqué ",nbDouble);


	return 0;
}