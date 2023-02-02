#include <stdio.h>
#include <stdlib.h>
#define max 500

int main () {
	char frase[max],aux;
	int tamfra,c;
	
	printf("Digite uma palavra ou uma frase: ");
	gets(frase);
	
	for(c = 0;c < max;c++) {
		tamfra = c - 1;
		if(frase[c] == '\0') break;
	}
	
	printf("Frase ao contrario:\n");
	for(c = 0; c <= tamfra/2;c++) {
		aux = frase[c];
		frase[c] = frase[tamfra - c];
		frase[tamfra - c] = aux;
	}
	
	puts(frase);
	
	return 0;
}
