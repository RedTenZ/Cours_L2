#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float x1, x2, delta, a, b, c;
    printf("Entrez les trois coef reels : a, b, c \n");
    scanf("%f %f %f",&a, &b, &c);

    delta = (b*b)-(4*a*c);

    if (delta == 0.0){
        x1 = -b /(2*a);
        printf("la solution unique est x = %.2f \n",x1);
    }else if (delta > 0.0)
    {
        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);
        printf("les deux racines sont : x1 = %.2f et x2 = %.2f \n",x1, x2);
    }else (delta < 0.0);

    printf("l'equation n admet pas de solution");

    return 0;
}