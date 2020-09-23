#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 100

int main(){


 int T[max],T2[max]; 
 int tailleU;     
 int i,ver,j;     
  srand(time(NULL));
 
 printf("donenr taille du tab ");

 scanf("%d", &tailleU );

 for (i=0; i<tailleU; i++)

    {

    T[i] = rand();

    }

     for (i=0; i<tailleU; i++)

    {

    T2[i] = rand();

    }

 printf("Tableau 1 donné :\n");

 for (i=0; i<tailleU; i++){

     printf("%d ", T[i]);


}

 printf("Tableau 2 donné :\n");

 for (i=0; i<tailleU; i++){

     printf("%d ", T2[i]);


}
ver =0;


 for (i=0; i<tailleU; i++){

    if(T[i]==T2[j]){

        printf("le %d element de chaque tableau est indentique ",i );
    }else{

        ver=1;
    }

}

if(ver==0){

printf("les tableaux sont completement egaux");

}else{

printf("les tableaux ne sont pas completement egaux ");

}

	return 0;

}