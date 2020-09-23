#include <stdio.h>
#include <stdlib.h>

int main(){
    char a ;
    printf("saisissez 1 lettre :\n");
    scanf("%c ",&a);
    if (a >='A' && a <='Z'){
        printf("%d est deja en Majuscule\n",a );
    } else{
        a-= abs('a'-'A');
        printf("%d",a);
    }
    return 0;
}