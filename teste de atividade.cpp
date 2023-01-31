#include <stdio.h>
#include <stdlib.h>

int main () {
	char frase[500];
	int d;
	
	printf("Digite uma palavra ou uma frase: ");
	gets(frase);
	
	for (int c = 0;c < 500;c++) {
		if(frase[c] == '\0') {
			d = c;
			break;
		}
	}
	
	printf("A frase digitada tem %d caracteres",d);
	

	return 0;
}
