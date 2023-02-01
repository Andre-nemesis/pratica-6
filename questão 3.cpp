#include <stdio.h>
#include <stdlib.h>
#define max 500

int main () {
	char frase[max],inv[max];
	int tamfra;
	
	printf("Digite uma palavra ou uma frase: ");
	gets(frase);
	
	for (int c = 0;frase[c] != '\0';c++) {
		tamfra = c;
	}

	printf("A frase digitada ao contrario e: ");
	for(int c = tamfra;c >= 0;c--){
		printf("%c",frase[c]);
	}
	
	return 0;
}
