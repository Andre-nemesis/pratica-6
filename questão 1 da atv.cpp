#include <stdio.h>
#include <stdlib.h>

int main () {
	char frase[500];
	int d;
	
	printf("Digite uma palavra ou uma frase: ");
	gets(frase);
	
	for (int c = 0;c < 500;c++) {
		if(frase[c] == 'a' || frase[c] == 'e' || frase[c] == 'i' || frase[c] == 'o' || frase[c] == 'u' || frase[c] == 'A'|| frase[c] == 'E'|| frase[c] == 'I'|| frase[c] == 'O'|| frase[c] == 'U') {
			d += 1 ;
		}
		if(frase[c] == '\0') break;
	}
	
	printf("A frase digitada tem %d vogais",d);
	
	
	return 0;
}
