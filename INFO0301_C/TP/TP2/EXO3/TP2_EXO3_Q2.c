#include <stdio.h>
int main()
{
  int a;
  int b;
  printf("Choisissez l'abscisse du point");
  scanf("%d",&a);
  printf("Choisissez l'ordonnée du point");
  scanf("%d",&b);
  
  if (a<0 && b>0){
    printf("1er cadran");
  }
  
  if (a>0 && b>0){
    printf("2eme cadran");
  }
  
  if (a<0 && b<0){
    printf("3eme cadran");
  }

  if (a>0 && b<0){
    printf("4eme cadran");
  }
  return (0);
}
