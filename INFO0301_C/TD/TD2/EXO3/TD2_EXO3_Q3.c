#include <stdio.h>
int main(){
    int a, b;
    printf("Entrez un premier nombre: \n");
    scanf("%d", &a);
    printf("Entrez un deuxoeme nombre: \n");
    scanf("%d", &b);
	int i = a>b;
    switch (i) {
        case 0: printf("le maximum est: %d\n", b);
            break;
        case 1: printf("le maximum est: %d\n", a);
            break;
        default: printf("Pas de maximum trouve");
    }
    return 0;
}