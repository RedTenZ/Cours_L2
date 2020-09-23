#include <stdio.h>
int main(){
    float a, b, c;
    printf("Entrez trois reels : a, b, c \n");
    scanf("%f %f %f",&a, &b, &c);
    if (a<(b+c) && b<(a+c) && c<(c+a)){

        printf("le triangle est possible avec les valeurs utilisées\nle perimétre est de %0.2f",(a+b+c));

    }else{
        printf("le triangle n'est pas possible avec les valeurs utilisées");

    }
    return 0;
}