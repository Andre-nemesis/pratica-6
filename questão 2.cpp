#include <stdio.h>
#include <stdlib.h>

int main () {
	char frase[500],letra;
	int d;
	
	printf("Digite uma palavra ou uma frase: ");
	gets(frase);
	printf("Digite uma letra para ver quantas vezes ela apareceu na frase ou palavra: ");
	scanf("%c",&letra);
	
	for (int c = 0;c < 500;c++) {
		if(frase[c] == letra) {
			d += 1 ;
		}
		if(frase[c] == '\0') break;
	}
	
	printf("A frase digitada tem %d letras %c",d,letra);
	
	
	return 0;
}
