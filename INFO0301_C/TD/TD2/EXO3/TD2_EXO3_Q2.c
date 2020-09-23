#include <stdio.h>
int main(){
    char c;
    printf("Entrez un caractére : \n");
    scanf("%c", &c);
    if(c >= 'a' && c <= 'z'){
        switch (c) {
            case 'a': case 'e': case 'i': case 'o': case 'u': case 'y': printf("C'est une voyelle !");
                break;
            default: printf("C'est une consonne !");
        }
    } else {
        printf("L'entree n'est pas un caractère alphabétique");
    }
    return 0;
}