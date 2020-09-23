#include <stdio.h>
int main()
{
	char c1;
	scanf("%c", &c1); 
	if(c1>=48 && c1<=57){
		printf("C'est un chiffre");
	}else if(c1>=65 && c1<=90){
		if(c1 == 'A' || c1 == 'E' || c1 == 'I' || c1 == 'O' || c1 == 'U' || c1 == 'Y'){
			printf("C'est une voyelle majuscule");
		}else{
			printf("C'est une consonne majuscule");
		}
	}else if(c1>=97 && c1<=122){
		if(c1 == 'a' || c1 == 'e' || c1 == 'i' || c1 == 'o' || c1 == 'u' || c1 == 'y'){
			printf("C'est une voyelle minuscule");
		}else{
			printf("C'est une consonne minuscule");
		}
	}
return 0;
}