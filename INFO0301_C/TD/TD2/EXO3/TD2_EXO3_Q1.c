#include <stdio.h>
int main(){
    int nb;
    printf("ENtrez un nombre de jours : \n");
    scanf("%d", &nb);
    switch (nb) {
        case 28: case 29: printf("Fevrier");
            break;
        case 30: printf("Avril, Juin, Septembre, Novembre");
            break;
        case 31: printf("Janvier, Mars, Mai, Juillet, Aout, Octobre, Decembre,");
            break;
        default: printf("Nombre de jours incorrect !");
    }
    return 0;
}
