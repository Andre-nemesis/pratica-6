#include <stdio.h>
#include <stdlib.h>
#define max 500

void invarray (char ary[],int tam) {
	int i, metade = tam/2;
	char aux;
	
	for(i = 0;i < metade;i++) {
		aux = ary[i];
		ary[i] = ary[tam - i - 1];
		ary[tam - i - 1] = aux;
	}
}

int main () {
	char frase[max];
	int tamfra,c;
	
	printf("Digite uma palavra ou uma frase: ");
	gets(frase);
	
	for(c = 0;frase[c] != '\0';c++) {
		tamfra = c - 1;
	}
	
	invarray(frase,tamfra);
	
	printf("Frase ao contrario:\n");
	puts(frase);
	
	return 0;
}
