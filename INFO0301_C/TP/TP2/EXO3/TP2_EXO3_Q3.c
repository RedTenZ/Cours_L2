#include <stdio.h>
int main()
{
  float a;
  float temp;
  float total;
  printf("nb d'unites\n");
  scanf("%f",&a);
  
  if(a>250){
	  temp = (a-250)*1.5;
	  total = temp + 220;
	  printf("Il y a %.2f a payer au total.\n %.2f pour les unites superieur à 250\n 120 pour les unités superieur à 150\n 75 pour les unites superieur à 50\n 25 pour les 50 premieres unites", temp, temp); 
  }else if(a>150){
	temp = (a-150)*1.2;
	total = temp + 100;
	printf("Il y a %.2f a payer au total.\n %.2f pour les unités superieur à 150\n 75 pour les unités superieur à 50\n 25 pour les 50 premieres unites", temp, temp); 
	}else if(a>50){
		temp = (a-50)*0.75;
		total = temp + 25;
		printf("Il y a %.2f a payer au total\n. %.2f pour les unites superieur à 50\n 25 pour les 50 premieres unites", temp, temp); 
	}else if(a>0){
		temp = a*0.5;
		printf("Il y a %.2f a payer au total.\n %.2f pour les 50 premieres unites", temp, temp); 
	}else if(a<0){
		printf("Impossible ! Réflechis ça peut pas être negatif"); 
	}
}
